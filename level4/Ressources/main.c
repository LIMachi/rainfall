#include <stdio.h>

//this seem almost identical to level3 0_o
//we have an unsafe usage of printf, and once again we need to change a global variable
//the only real change is that this time the printf is inside a subfunction and that m is checked against 0x1025544
//(this check means we can't relly on the effective size of our input to set m via a simple %n, the solution is probably to use a %<size><format> to force printf to print a lot of chars out of thin air before our %<arg_pos>$n)

int m;

void p(char *v) {
    printf(v);
}

void n() {
    char buff[0x200];

    fgets(buff, 0x200, stdin);
    p(buff);
    if (m == 0x1025544)
        system("/bin/cat /home/user/level5/.pass");
}

void main() {
    n();
}