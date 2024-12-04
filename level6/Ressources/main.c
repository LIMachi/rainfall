#include <stdlib.h>
#include <stdio.h>

//derived using dogbolt's hex-rays, binaryNinja and angr
//this time it is kind of obvious that we need to change the pointer fun to n instead of m, and argv is not protected when using strcpy (strcpy will greedily copy any characters until \0, potentially overflowing the allocation on the heap and hitting the fun variable)
//to make sure everything is valid, we will check again the asm from objdump and gdb
//my first guess is that we will have to write at least 0x40 (64) random char, then write the address of n

//https://unix.stackexchange.com/questions/393351/pass-contents-of-file-as-argument-to-bash-script

int n() {
    return system("/bin/cat /home/user/level7/.pass");
}

int m() {
    return puts("Nope");
}

int main(int argc, char **argv) {
    char *buff = malloc(0x40);
    int (**fun)() = malloc(sizeof(void*)); //note: sizeof(void*) is not in the asm, but one could assume this was the intention (we are in 32 bits, so a pointer is 4 bytes)
    *fun = m; //mov %eax,0x18(%esp), mov $0x8048468,%edx, mov 0x18(%esp),%eax, mov %edx,(%eax) (fun (esp + 0x18) = result of malloc, d = m absolute address, a = address of fun (esp + 0x18), *a = d)
    strcpy(buff, argv[1]);
    return (*fun)(); //absolute direct call *%eax, eax being loaded with *fun (mov 0x18(%esp),%eax -> eax = fun, mov (%eax),%eax, eax = *eax)
}