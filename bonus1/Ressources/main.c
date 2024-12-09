#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char **argv) {
	char buff[40]; //[esp+20] [ebp-44]
	int i; //[esp+60] [ebp-4]

	i = atoi(argv[1]);
	if (i > 9) //safety against i being to big, doesn't account for negative value (most probable vulnerability)
		return 1;

	memcpy(buff, argv[2], i * 4); //this times 4 with a negative value seem exploitable (will have to use a calculator for that, but to get a positive formula: (((unsigned int)i) * 4) % (2 ^ 32), if this gives us a value below 2 ^ 31, then we have our positive value

	if (i == 0x574f4c46) //a memcpy of this size would probably fail or corrupt something, so the most probable is to override i with the memcpy
		execl("/bin/sh", "sh", 0);

	return 0;
}