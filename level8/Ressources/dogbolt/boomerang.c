int main(int argc, char *argv[]);

void * auth;
void * service;

/** address: 0x08048564 */
int main(int argc, char *argv[])
{
    unsigned char al; 		// r8
    unsigned char dl; 		// r10
    size_t eax; 		// r24
    char *eax_1; 		// r24
    int ecx; 		// r25
    int ecx_1; 		// r25{36}
    int ecx_2; 		// r25{40}
    union { int; unsigned int *; __size8 *x154; } edi; 		// r31
    unsigned int *edi_1; 		// r31{51}
    union { int; unsigned int *; int *x151; __size8 *x159; } edi_10; 		// r31{19}
    union { int; unsigned int *; __size8 *x155; } edi_11; 		// r31{22}
    unsigned int *edi_2; 		// r31{54}
    unsigned char *edi_4; 		// r31{68}
    unsigned char *edi_5; 		// r31{71}
    unsigned char *edi_7; 		// r31{85}
    unsigned char *edi_8; 		// r31{88}
    int edx; 		// r26
    union { int; unsigned int *; __size8 *x121; } esi; 		// r30
    union { int; unsigned int *x1; int *; __size8 *x31; } esi_1; 		// r30{50}
    union { int; unsigned int *; int *x124; __size8 *x149; } esi_10; 		// r30{18}
    union { int; unsigned int *; __size8 *x125; } esi_11; 		// r30{21}
    union { int; unsigned int *x5; int *; __size8 *x33; } esi_2; 		// r30{53}
    union { int; unsigned int *x2; char *; } esi_4; 		// r30{67}
    union { int; unsigned int *x12; char *; } esi_5; 		// r30{70}
    union { int; unsigned int *x3; char *; } esi_7; 		// r30{84}
    union { int; unsigned int *x19; char *; } esi_8; 		// r30{87}
    int esp; 		// r28
    __size32 local0; 		// m[esp - 144]
    FILE *local1; 		// m[esp - 160]
    union { int; unsigned int *; int *x124; __size8 *x149; } local11; 		// esi_10{18}
    union { int; unsigned int *; int *x151; __size8 *x159; } local12; 		// edi_10{19}
    int local13; 		// ecx_1{36}
    union { int; unsigned int *x1; int *; __size8 *x31; } local14; 		// esi_1{50}
    unsigned int *local15; 		// edi_1{51}
    union { int; unsigned int *x2; char *; } local16; 		// esi_4{67}
    unsigned char *local17; 		// edi_4{68}
    union { int; unsigned int *x3; char *; } local18; 		// esi_7{84}
    unsigned char *local19; 		// edi_7{85}
    char local2; 		// m[esp - 140]
    char local3; 		// m[esp - 135]
    char local4; 		// m[esp - 133]

    for(;;) {
bb0x8048575:
        printf("%p, %p \n", auth, service);
        eax = *0x8049a80;
        eax_1 = fgets(&local2, 128, eax);
        if (eax_1 == 0) {
            return 0;
        }
        ecx = 5;
        esi = esp - 140;
        local11 = esi;
        edi = 0x8048819;
        local12 = edi;
        do {
            esi_10 = local11;
            edi_10 = local12;
            tmpb = *esi_10 - *edi_10;
            esi_11 = esi_10 + ( (DF == 0) ? 1 : -1);
            local11 = esi_11;
            edi_11 = edi_10 + ( (DF == 0) ? 1 : -1);
            local12 = edi_11;
            ecx--;
        } while (tmpb == 0);
        dl =  (*esi_10 > *edi_10) ? 1 : 0;
        edx = esp - 140 & ~0xff | (dl);
        al =  (*esi_10 < *edi_10) ? 1 : 0;
        if ((int) ((edx & ~0xff | ((edx & 0xff) - al)) & 0xff) == 0) {
            eax = malloc(4);
            *(void **)0x8049aac = eax;
            eax = *0x8049aac;
            *(__size32*)eax = 0;
            local0 = -1;
            ecx = -1;
            local13 = ecx;
            edi = esp - 135;
            do {
                ecx_1 = local13;
                tmpb = 0 - *edi;
                edi +=  (DF == 0) ? 1 : -1;
                ecx_2 = ecx_1 - 1;
                local13 = ecx_2;
            } while (tmpb != 0);
            if (~(ecx_1 - 1) - 1 <= 30) {
                eax = *0x8049aac;
                strcpy(eax, &local3);
            }
        }
        ecx = 5;
        esi = esp - 140;
        local14 = esi;
        edi = 0x804881f;
        local15 = edi;
        do {
            esi_1 = local14;
            edi_1 = local15;
            tmpb = *esi_1 - *edi_1;
            esi_2 = esi_1 + ( (DF == 0) ? 1 : -1);
            local14 = esi_2;
            edi_2 = edi_1 + ( (DF == 0) ? 1 : -1);
            local15 = edi_2;
            ecx--;
        } while (tmpb == 0);
        dl =  (*esi_1 > *edi_1) ? 1 : 0;
        edx = esp - 140 & ~0xff | (dl);
        al =  (*esi_1 < *edi_1) ? 1 : 0;
        if ((int) ((edx & ~0xff | ((edx & 0xff) - al)) & 0xff) == 0) {
            eax = *0x8049aac;
            free(eax);
        }
        ecx = 6;
        esi = esp - 140;
        local16 = esi;
        edi = 0x8048825;
        local17 = edi;
        do {
            esi_4 = local16;
            edi_4 = local17;
            tmpb = *esi_4 - *edi_4;
            esi_5 = esi_4 + ( (DF == 0) ? 1 : -1);
            local16 = esi_5;
            edi_5 = edi_4 + ( (DF == 0) ? 1 : -1);
            local17 = edi_5;
            ecx--;
        } while (tmpb == 0);
        dl =  (*esi_4 > *edi_4) ? 1 : 0;
        edx = esp - 140 & ~0xff | (dl);
        al =  (*esi_4 < *edi_4) ? 1 : 0;
        if ((int) ((edx & ~0xff | ((edx & 0xff) - al)) & 0xff) == 0) {
            eax = strdup(&local4);
            *(union { int; char *; }*)0x8049ab0 = eax;
        }
        ecx = 5;
        esi = esp - 140;
        local18 = esi;
        edi = 0x804882d;
        local19 = edi;
        do {
            esi_7 = local18;
            edi_7 = local19;
            tmpb = *esi_7 - *edi_7;
            esi_8 = esi_7 + ( (DF == 0) ? 1 : -1);
            local18 = esi_8;
            edi_8 = edi_7 + ( (DF == 0) ? 1 : -1);
            local19 = edi_8;
            ecx--;
        } while (tmpb == 0);
        dl =  (*esi_7 > *edi_7) ? 1 : 0;
        edx = esp - 140 & ~0xff | (dl);
        al =  (*esi_7 < *edi_7) ? 1 : 0;
        if ((int) ((edx & ~0xff | ((edx & 0xff) - al)) & 0xff) != 0) {
            continue;
        }
        eax = *(auth + 32);
        if (eax != 0) {
            break;
        }
        %eax = *0x8049aa0;
        local1 = %eax;
        fwrite("Password:\n", 1, 10, %eax);
    }
    system("/bin/sh");
    goto bb0x8048575;
}

