#include <stdlib.h>
#include <stdio.h>

//at first glance it seems similar to the previous 2 levels, but this one is a bit tricky:
//we no longer exploit an obvious global variable and instead it looks a lot like level1 where we need to smash the stack to get eip to point to o... but those exit make this harder than relying on leave/ret popping eip for us
//let's have a quick look to objdump to see how the stack and other pointers are used before exit:
//we have a movl setting the return value to 1, then a relative immediate call to the function 'exit'...
//ok, this time I'm clueless, because I don't see an obvious usage of memory from the stack or heap
//*sponge bob narator voice* eventually
//we found an interesting site while searching exploits using printf: https://ctf101.org/binary-exploitation/what-is-a-format-string-vulnerability/
//and one thing caught our eyes: the explanation about GOT (also something weird in the disassembled binary that could have tipped us off was the fact that exit was called as a function and not the interrupt 0x20 with syscall 1)
//I think we can point the plt function exit to o using the same exploit as the previous level (writing the address of o in the plt where exit should be)
//because the first site only mention the GOT attack but skips some details, we ended up finding another paper about this exploit here: https://www.exploit-db.com/papers/13203

void o() {
    system("/bin/sh");
    exit(1);
}

void n() {
    char buff[0x200];
    fgets(buff, 0x200, stdin);
    printf(buff);
    exit(1);
}

void main() {
    n();
}