#include <stdlib.h>
#include <stdio.h>

//at first glance it seems similar to the previous 2 levels, but this one is a bit tricky:
//we no longer exploit an obvious global variable and instead it looks a lot like level1 where we need to smash the stack to get eip to point to o... but those exit make this harder than relying on leave/ret popping eip for us
//let's have a quick look to objdump to see how the stack and other pointers are used before exit:
//we have a movl setting the return value to 1, then a relative immediate call to the function 'exit'...
//ok, this time I'm clueless, because I don't see an obvious usage of memory from the stack or heap

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