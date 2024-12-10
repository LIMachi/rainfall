#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//this time dogbolt has some difficulties generating a readable c file (probably because we are using structs), but angr + binaryNinja managed to give something that seem to have some sense
//the usage of time is a misdirection since m is never explicitly called in main, we want to find a way to execute m to get the value of c (the password for level8)
//since c contains our target only AFTER the strcpy, the most probable solution is to reuse the trick in level5 where we replaced a reference to exit with a ref to o
//now to find the how (the fact that we have 2 strcpy with locations on the heap seem promising)

char c[68]; //searched how to get the size and found: https://stackoverflow.com/questions/75949454/nm-reports-different-sizes-for-variables-of-the-same-type-how-do-i-find-out-t
//nm give us: 00000050, so 80 (including padding), but since fgets uses a size of 68, I put a size of 68 (if padded to be aligned to 16 bytes, would result in an effective size of 80)

int m() {
	time_t t;

	t = time(NULL);
	return printf("%s - %d\n", c, t);
}

typedef struct {
	int i; //index of argument?
	char *p; //argument?
} unknown_t;

int main(int argc, char **argv) {
	unknown_t *u0;
	unknown_t *u1;

	u0 = (unknown_t *)malloc(sizeof(unknown_t)); //8 since int and pointers are of size 4 on 32 bit machines
	u0->i = 1;
	u0->p = (char *)malloc(8);
	u1 = (unknown_t *)malloc(sizeof(unknown_t));
	u1->i = 2;
	u1->p = (char *)malloc(8);
	strcpy(u0->p, argv[1]);
	strcpy(u1->p, argv[2]);
	fgets(c, 68, fopen("/home/user/level8/.pass", "r"));
	puts("~~");
	return 0;
}