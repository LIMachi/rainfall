#include <string.h>
#include <stdio.h>
#include <unistd.h>

//dogbolt: angr for the offsets, ghidra and hex-rays for the use of functions and guesses of buffer sizes

char* p(char* buff, char* sep) {
	char t[0x1000]; //offset of 0x1008~0x100c is used, but we can assume that the most probable size is one matching the read

	puts(sep);
	read(0, t, 0x1000); //size is given, and t is big enough for all the data
	*strchr(t, '\n') = '\0'; //unsafe usage of strchr, if no '\n' is found it will result in null de-referencing (also it might set to 0 a location outside the range of 't')
	return strncpy(buff, t, 20); //could be unsafe as it will not add a '\0' if there is too many characters to copy, otherwise seem fine
}

char* pp(char* buff) {
	char buff1[20];
	char buff2[20];

	p(buff1, " - ");
	p(buff2, " - ");
	strcpy(buff, buff1); //if the input was 20 or more characters, strcpy might not find a '\0' right after the 20th character depending on the state of the memory, potentially unsafe
	buff[strlen(buff)] = ' '; //same danger as above
	return strcat(buff, buff2); //same danger as above (note that in theory the maximum size of the string should be 42: 20 chars of the first input, a space character, 20 chars of the second input and a terminating null)
}

int main() {
	char buff[54];

	pp(buff);
	puts(buff);
	return 0;
}