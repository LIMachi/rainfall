
void fun_80483cd();

void fun_8048490();

void frame_dummy();

void __do_global_ctors_aux();

void _init(int32_t a1) {
    int32_t v2;

    fun_80483cd();
    if (*reinterpret_cast<int32_t*>(v2 + 0x165f - 4)) {
        fun_8048490();
    }
    frame_dummy();
    __do_global_ctors_aux();
    goto a1;
}

void fun_80483cd() {
    int32_t v1;

    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0x165f - 4)) {
        fun_8048490();
    }
    frame_dummy();
    __do_global_ctors_aux();
    goto v1;
}

int32_t __gmon_start__ = 0x8048496;

void fun_8048490() {
    goto __gmon_start__;
}

int32_t __JCR_END__ = 0;

void __libc_start_main(int32_t a1);

void frame_dummy() {
    int32_t eax1;

    eax1 = __JCR_END__;
    if (eax1 && !1) {
        __libc_start_main(0x804995c);
    }
    return;
}

int32_t __init_array_start = -1;

void __do_global_ctors_aux() {
    int32_t eax1;
    int32_t* ebx2;

    eax1 = __init_array_start;
    if (eax1 != -1) {
        ebx2 = reinterpret_cast<int32_t*>(0x804994c);
        do {
            --ebx2;
            eax1();
            eax1 = *ebx2;
        } while (eax1 != -1);
    }
    return;
}

struct s0 {
    int32_t f0;
    signed char[28] pad32;
    int32_t f20;
};

int32_t malloc = 0x8048476;

struct s0* fun_8048470(int32_t a1, void* a2, int32_t a3, int32_t a4) {
    goto malloc;
}

int32_t strcpy = 0x8048466;

void fun_8048460(struct s0* a1, void* a2, int32_t a3, int32_t a4) {
    goto strcpy;
}

int32_t free = 0x8048426;

void fun_8048420(struct s0* a1, void* a2, int32_t a3, int32_t a4) {
    goto free;
}

int32_t strdup = 0x8048436;

int32_t fun_8048430(struct s0* a1, void* a2, int32_t a3, int32_t a4) {
    goto strdup;
}

int32_t system = 0x8048486;

void fun_8048480(int32_t a1, void* a2, int32_t a3, int32_t a4) {
    goto system;
}

int32_t printf = 0x8048416;

void fun_8048410(int32_t a1, struct s0* a2, int32_t a3, int32_t a4) {
    goto printf;
}

int32_t fgets = 0x8048446;

int32_t fun_8048440(void* a1, void* a2, int32_t a3, int32_t a4) {
    goto fgets;
}

int32_t fwrite = 0x8048456;

void fun_8048450(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    goto fwrite;
}

void __do_global_dtors_aux();

void fun_80487f5() {
    int32_t v1;

    __do_global_dtors_aux();
    goto v1;
}

int32_t __libc_start_main = 0x80484a6;

void fun_80484a0(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

/* __i686.get_pc_thunk.bx */
void __i686_get_pc_thunk_bx() {
    return;
}

/* completed.6159 */
signed char completed_6159 = 0;

/* dtor_idx.6161 */
uint32_t dtor_idx_6161 = 0;

void __do_global_dtors_aux() {
    int1_t zf1;
    uint32_t eax2;
    uint32_t eax3;

    zf1 = completed_6159 == 0;
    if (zf1) {
        eax2 = dtor_idx_6161;
        if (eax2 < 0) {
            do {
                eax3 = eax2 + 1;
                dtor_idx_6161 = eax3;
                *reinterpret_cast<int32_t*>(eax3 * 4 + 0x8049954)();
                eax2 = dtor_idx_6161;
            } while (eax2 < 0);
        }
        completed_6159 = 1;
    }
    return;
}

void fun_804840c() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_8048535() {
}

void fun_80487a1() {
    return;
}

void _fini() {
    fun_80487f5();
}

int32_t g8049a34 = 0;

void fun_8048496() {
    goto g8049a34;
}

void fun_8048416() {
    goto 0x8048400;
}

int32_t service = 0;

struct s0* auth = reinterpret_cast<struct s0*>(0);

int32_t stdin = 0;

int32_t stdout = 0;

int32_t main() {
    struct s0** esp1;
    int32_t ecx2;
    struct s0* edx3;
    int32_t v4;
    void** esp5;
    int32_t eax6;
    int32_t v7;
    void* v8;
    int32_t eax9;
    uint1_t cf10;
    uint1_t zf11;
    uint1_t below_or_equal12;
    void* edx13;
    int32_t ecx14;
    unsigned char* edi15;
    unsigned char v16;
    unsigned char v17;
    unsigned char v18;
    void* ecx19;
    void* eax20;
    uint1_t cf21;
    uint1_t zf22;
    uint1_t below_or_equal23;
    void* edx24;
    int32_t ecx25;
    unsigned char* edi26;
    struct s0* eax27;
    struct s0* eax28;
    int32_t ecx29;
    signed char v30;
    uint32_t eax31;
    unsigned char v32;
    unsigned char v33;
    unsigned char v34;
    void* ecx35;
    void* eax36;
    uint1_t cf37;
    uint1_t zf38;
    uint1_t below_or_equal39;
    struct s0* eax40;
    void* edx41;
    int32_t ecx42;
    unsigned char* edi43;
    unsigned char v44;
    unsigned char v45;
    unsigned char v46;
    void* ecx47;
    void* eax48;
    uint1_t cf49;
    uint1_t zf50;
    uint1_t below_or_equal51;
    struct s0* eax52;
    struct s0* tmp32_53;
    int32_t eax54;
    void* edx55;
    int32_t ecx56;
    unsigned char* edi57;
    unsigned char v58;
    unsigned char v59;
    unsigned char v60;
    void* ecx61;
    void* eax62;
    struct s0* eax63;
    int32_t eax64;
    struct s0* eax65;

    esp1 = reinterpret_cast<struct s0**>((reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4) & 0xfffffff0) - 0xa0);
    while (ecx2 = service, edx3 = auth, fun_8048410("%p, %p \n", edx3, ecx2, v4), esp5 = reinterpret_cast<void**>(esp1 - 1 + 1), eax6 = stdin, v7 = eax6, v8 = reinterpret_cast<void*>(0x80), eax9 = fun_8048440(esp5 + 8, 0x80, v7, v4), esp1 = reinterpret_cast<struct s0**>(esp5 - 1 + 1), cf10 = 0, zf11 = reinterpret_cast<uint1_t>(eax9 == 0), below_or_equal12 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf11)), !zf11) {
        edx13 = reinterpret_cast<void*>(esp1 + 8);
        ecx14 = 5;
        edi15 = reinterpret_cast<unsigned char*>("auth ");
        do {
            if (!ecx14)
                break;
            --ecx14;
            cf10 = reinterpret_cast<uint1_t>(v16 < *edi15);
            below_or_equal12 = reinterpret_cast<uint1_t>(v17 <= *edi15);
            ++edi15;
        } while (v18 == *edi15);
        *reinterpret_cast<unsigned char*>(&edx13) = reinterpret_cast<uint1_t>(!below_or_equal12);
        ecx19 = edx13;
        *reinterpret_cast<unsigned char*>(&ecx19) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx19) - cf10);
        eax20 = ecx19;
        cf21 = 0;
        zf22 = reinterpret_cast<uint1_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax20)) == 0);
        below_or_equal23 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf22));
        if (!zf22) {
            addr_8048642_7:
            edx24 = reinterpret_cast<void*>(esp1 + 8);
            ecx25 = 5;
            edi26 = reinterpret_cast<unsigned char*>("reset");
        } else {
            eax27 = fun_8048470(4, 0x80, v7, v4);
            esp1 = esp1 - 1 + 1;
            auth = eax27;
            eax28 = auth;
            eax28->f0 = 0;
            ecx29 = -1;
            do {
                if (!ecx29)
                    break;
                --ecx29;
            } while (v30);
            eax31 = reinterpret_cast<uint32_t>(~ecx29 - 1);
            cf21 = reinterpret_cast<uint1_t>(eax31 < 30);
            below_or_equal23 = reinterpret_cast<uint1_t>(eax31 <= 30);
            if (!below_or_equal23)
                goto addr_8048642_7; else
                goto addr_804862a_12;
        }
        do {
            if (!ecx25)
                break;
            --ecx25;
            cf21 = reinterpret_cast<uint1_t>(v32 < *edi26);
            below_or_equal23 = reinterpret_cast<uint1_t>(v33 <= *edi26);
            ++edi26;
        } while (v34 == *edi26);
        *reinterpret_cast<unsigned char*>(&edx24) = reinterpret_cast<uint1_t>(!below_or_equal23);
        ecx35 = edx24;
        *reinterpret_cast<unsigned char*>(&ecx35) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx35) - cf21);
        eax36 = ecx35;
        cf37 = 0;
        zf38 = reinterpret_cast<uint1_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax36)) == 0);
        below_or_equal39 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf38));
        if (zf38) {
            eax40 = auth;
            fun_8048420(eax40, v8, v7, v4);
            esp1 = esp1 - 1 + 1;
        }
        edx41 = reinterpret_cast<void*>(esp1 + 8);
        ecx42 = 6;
        edi43 = reinterpret_cast<unsigned char*>("service");
        do {
            if (!ecx42)
                break;
            --ecx42;
            cf37 = reinterpret_cast<uint1_t>(v44 < *edi43);
            below_or_equal39 = reinterpret_cast<uint1_t>(v45 <= *edi43);
            ++edi43;
        } while (v46 == *edi43);
        *reinterpret_cast<unsigned char*>(&edx41) = reinterpret_cast<uint1_t>(!below_or_equal39);
        ecx47 = edx41;
        *reinterpret_cast<unsigned char*>(&ecx47) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx47) - cf37);
        eax48 = ecx47;
        cf49 = 0;
        zf50 = reinterpret_cast<uint1_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax48)) == 0);
        below_or_equal51 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf50));
        if (zf50) {
            eax52 = reinterpret_cast<struct s0*>(esp1 + 8);
            tmp32_53 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(eax52) + 7);
            cf49 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_53) < reinterpret_cast<uint32_t>(eax52));
            below_or_equal51 = reinterpret_cast<uint1_t>(cf49 | reinterpret_cast<uint1_t>(tmp32_53 == 0));
            eax54 = fun_8048430(tmp32_53, v8, v7, v4);
            esp1 = esp1 - 1 + 1;
            service = eax54;
        }
        edx55 = reinterpret_cast<void*>(esp1 + 8);
        ecx56 = 5;
        edi57 = reinterpret_cast<unsigned char*>("login");
        do {
            if (!ecx56)
                break;
            --ecx56;
            cf49 = reinterpret_cast<uint1_t>(v58 < *edi57);
            below_or_equal51 = reinterpret_cast<uint1_t>(v59 <= *edi57);
            ++edi57;
        } while (v60 == *edi57);
        *reinterpret_cast<unsigned char*>(&edx55) = reinterpret_cast<uint1_t>(!below_or_equal51);
        ecx61 = edx55;
        *reinterpret_cast<unsigned char*>(&ecx61) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx61) - cf49);
        eax62 = ecx61;
        if (!*reinterpret_cast<signed char*>(&eax62)) {
            eax63 = auth;
            if (!eax63->f20) {
                eax64 = stdout;
                v4 = eax64;
                fun_8048450("Password:\n", 1, 10, v4);
                esp1 = esp1 - 1 + 1;
            } else {
                fun_8048480("/bin/sh", v8, v7, v4);
                esp1 = esp1 - 1 + 1;
            }
        }
        continue;
        addr_804862a_12:
        eax65 = auth;
        v8 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp1 + 8) + 5);
        fun_8048460(eax65, v8, v7, v4);
        esp1 = esp1 - 1 + 1;
        goto addr_8048642_7;
    }
    return 0;
}

void fun_8048476() {
    goto 0x8048400;
}

void fun_8048466() {
    goto 0x8048400;
}

void fun_8048426() {
    goto 0x8048400;
}

void fun_8048436() {
    goto 0x8048400;
}

void fun_8048486() {
    goto 0x8048400;
}

void fun_8048446() {
    goto 0x8048400;
}

void __libc_csu_init(int32_t a1, int32_t a2, int32_t a3) {
    int32_t ebx4;
    int32_t ebx5;
    int32_t ebp6;
    int32_t v7;
    int32_t edi8;
    int32_t esi9;

    __i686_get_pc_thunk_bx();
    ebx4 = ebx5 + 0x12e3;
    ebp6 = a1;
    _init(v7);
    edi8 = ebx4 - 0xe0 - (ebx4 - 0xe0) >> 2;
    if (edi8) {
        esi9 = 0;
        do {
            *reinterpret_cast<int32_t*>(ebx4 + esi9 * 4 - 0xe0)(ebp6, a2, a3);
            ++esi9;
        } while (esi9 != edi8);
    }
    return;
}

void fun_8048456() {
    goto 0x8048400;
}

void fun_80484a6() {
    goto 0x8048400;
}

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_80484a0(main, __return_address(), esp1, __libc_csu_init, 0x80487b0, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}
