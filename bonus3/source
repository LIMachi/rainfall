#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

//hex-rays was enough to get this code

int main(int argc, char **argv, char **envp) {
	FILE *file = fopen("/home/user/end/.pass", "r"); //welp, I guess that for our final exploit we won't need to cat /home/user/end/.pass
	char buffer[123];

	memset(buffer, 0, sizeof(buffer)); //inline
	if (file == NULL || argc != 2) //ok, we make sure we have our file and there is only a single arg passed to bonus3
		return -1;
	fread(buffer, 1, 0x42, file); //the password is inside the buffer now (not sure if gdb would have access to this... nope error -1)
	buffer[65] = '\0'; //we null terminate the read (65 is odd since we just read 0x42 so 66 bytes), also this is not present in all the decompilers output
	buffer[atoi(argv[1])] = '\0'; //ok, this is weird, are we supposed to input a number?
	fread(&buffer[66], 1, 0x41, file); //we read the password again, nvm I'm dumb, we didn't reset the file so we probably are way past the interesting parts
	fclose(file);
	if (!strcmp(buffer, argv[1])) //we compare buffer and argv[1]? but argv[1] is supposed to be a number, and anyways we can't compare against something we don't know
		execl("/bin/sh", "sh", 0); //ok, maybe we do need to do a cat /home/user/end/.pass after all :)
	else
		puts(&buffer[66]); //wait, do they give us the password after all??? (I don't see anything when I input random numbers)
	return 0;
}