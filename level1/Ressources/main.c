#include <stdio.h>
#include <stdlib.h>

int run()
{
    fwrite("Good... Wait what?\n", 1, 19, stdout);
    return system("/bin/sh");
}

int main() {
    char buff[0x44];
    return gets(buff);
}