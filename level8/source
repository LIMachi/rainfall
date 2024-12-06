#include <stdio.h>
#include <string.h>

//using the output of hexray we have something that almost makes sense
//(except the 3 sizes of buffers, they all are next to each other so it might be a single buffer of size 128 matching the fgets? and the extra size might be because of padding)
//also there is strlen and other function running on the 3 buffers as if they where bigger (or one and the same)
//also if we read the code, we can see that the 'auth' command expects to be followed by an id of some sort that will be stored in the global variable auth

char *service; //most of the disassemblers say this is an int, but the only 2 function using it expect a pointer (strdup is used, so most probably a char pointer)
char *auth;

void main() {
	char buff[128]; //ebp - 136
	//v5 becomes buff + 5, ebp - 131
	//v6 becomes buff + 7, ebp - 129
	while (1) {
		printf("%p, %p \n", auth, service);
		if (!fgets(buff, 128, stdin))
			break;
		if (!memcmp(buff, "auth ", 5)) //note: most of the other disassemblers have a loop there, so memcmp might have been inlined
		{
			auth = malloc(4); //why 4? (we obviously will overflow with the strcpy)
			*auth = 0; //we initialize the first char of auth to 0? ('\0')
			if (strlen(buff + 5) <= 30)
				strcpy(auth, buff + 5); //heh? (angr and binary ninja say the same)
		}
		if (!memcmp(buff, "reset", 5))
			free(auth);
		if (!memcmp(buff, "service", 6))
			service = strdup(buff + 7);
		if (!memcmp(buff, "login", 5)) {
			if (auth[32]) //most of the other disassembler say it is 32 (maybe hexray interpreted auth as a point to int at this position, so 8 32bit ints to get an offset of 32 bytes)
				system("/bin/sh");
			else
				fwrite("Password:\n", 1, 10, stdout);
		}
	}
	return 0;
}

//so, we have an unsafe strcpy to an allocation of 4 bytes (unsafe because the string might have a maximum size of 30)
//we also have a strdup that allow us to use an unknown amount of memory
//finally, the check for accessing system is in unknown allocation teritory (since auth was malloc'ed with 4 bytes and auth shouldn't have been copied with more than 30 chars)
//time to check all the alocation with gdb, but the most probable is some sort of overflow of the service variable writing something at auth[32] (if the allocations are in the correct order)

//actually never mind, the program shows us the pointers auth and service at each input, so we don't even need gdb
//the first alocation is always at 0x804a008 (we've seen this address a few times already), no matter the size
//the next alocation depends on the size of the previous one (but not for auth, since the malloc used is always of size 4)
//running multiple auth increment the address by 16 (0x10), so to get the 32nd byte of auth we need a service of at least 16 bytes