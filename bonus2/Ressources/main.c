#include <string.h>
#include <stdlib.h>

//dogbolt used: angr, binaryninja, dewolf, ghidra and hex-rays

int language = 0;

int greetuser(char *user) {
	char greeting[19]; //hexrays suggest this is the concatenation of int128 + int16 + int8 or 19 bytes, angr is kind of lost, and let's not even talk about the 3 other decompilers

	switch (language)
	{
		case 1:
			memcpy(greeting, "Hyvää päivää ", 18); //inline
			break;
		case 2:
			strcpy(greeting, "Goedemiddag! "); //inline
			break;
		default:
			strcpy(greeting, "Hello "); //inline
	}
	strcat(greeting, user); //strcat inside a buffer of fixed size that might already be full! (user might have a size of 40+32=72 chars, with the maximum of 18 chars from finland, we could end up with a greeting of 90 chars!)
	return puts(greeting);
}

int main(int argc, char **argv) {
	char cpy[80]; //note: the spacing in the disassembly suggest a maximum size of 80
	char buff[80]; //same as above
	char *env_lang;

	if (argc != 3)
		return 1;

	memset(buff, 0, sizeof(buff)); //inline
	strncpy(buff, argv[1], 40); //safe
	strncpy(&buff[40], argv[2], 32); //safe (the buffer seem to be big enough to contain 40+32 bytes, and it was even initialized with 0)
	//weird thing is, since we copy at buff[40], if the first arg is not long enough to override all the \0, we won't see the second arg

	env_lang = getenv("LANG");
	if (env_lang != NULL) {
		if (!memcmp(env_lang, "fi", 2))
			language = 1;
		else if (!memcmp(env_lang, "nl", 2))
			language = 2;
	}
	memcpy(cpy, buff, sizeof(cpy)); //inline, not sure why this is there, maybe for our exploit?
	return greetuser(cpy);
}