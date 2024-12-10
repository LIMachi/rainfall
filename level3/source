#include <stdio.h>
#include <stdlib.h>

//we used a mix ouf outputs from dogbolt to derive this main
//we can see that this time instead of the unsafe gets, fgets is used with a size matching the buffer (note: dogbolt usually fails to calculate the accurate size of the buffer, but for now we trust it)
//some of the dogbolts output also show a global/extern variable (m) that is checked after printf, and if we pass the check we will have access to a shell
//the most obvious error (if you use an intelligent ide that warns about it) is the use of printf with it's first parameter not being static (aka could be changed maliciously)
//I remember doing a lot of options for my ft_printf, so I remember there is one that stores a size in a pointer, a quick man 3 printf shows me that %n stores the current count of printed chars into a int pointed by the parameters of printf
//so we need to find a way to use this to set m to 0x40 (64)

int m;

void v() {
    char buff[0x200];
    fgets(buff, 0x200, stdin);
    printf(buff);
    if (m == 0x40) {
        fwrite("Wait what?!\n", 1, 12, stdout);
        system("/bin/sh");
    }
}

int main() {
    v();
}