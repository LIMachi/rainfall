extern unsigned int g_8049a28;

void _init()
{
    if (g_8049a28)
        __gmon_start__();
    frame_dummy();
    __do_global_ctors_aux();
    return;
}

int _start()
{
    unsigned int v0;  // [sp-0x8]
    char *v1;  // [sp+0x0], Other Possible Types: unsigned int
    char v2;  // [bp+0x4]
    unsigned int v3;  // eax
    unsigned int v4;  // edx

    v1 = v3;
    v0 = v4;
    __libc_start_main(main, v1, &v2, __libc_csu_init, __libc_csu_fini); /* do not return */
}

int sub_80484d1()
{
    [D] Unsupported jumpkind Ijk_SigTRAP at address 134513873()
}

typedef struct struct_1 {
    char padding_0[134519124];
    struct struct_0 *field_8049954;
} struct_1;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

extern char completed.6159;
extern struct_1 *dtor_idx.6161;

void __do_global_dtors_aux()
{
    struct_1 *v1;  // eax

    if (!completed.6159)
    {
        v1 = dtor_idx.6161;
        if (dtor_idx.6161 < 0)
        {
            do
            {
                dtor_idx.6161 = &v1->padding_0[1];
                *((int *)(0x4 * dtor_idx.6161 + &__DTOR_LIST__))();
                v1 = dtor_idx.6161;
            } while (dtor_idx.6161 < 0);
        }
        completed.6159 = 1;
    }
    return;
}

extern unsigned int __JCR_END__;

void frame_dummy()
{
    return;
}

typedef struct struct_0 {
    char field_0;
} struct_0;

extern struct_1 *auth;
extern unsigned int service;
extern FILE_t *stdin;
extern FILE_t *stdout;

int main()
{
    unsigned int v0;  // [sp-0x90]
    char v1;  // [bp-0x8c]
    char v2;  // [bp-0x87]
    char v3;  // [bp-0x85]
    unsigned int v5;  // d
    unsigned int v6;  // ecx
    struct_0 *v7;  // esi
    char *v8;  // edi
    unsigned int v9;  // cc_dep1
    unsigned int v10;  // cc_dep2
    char *v11;  // edi
    struct_0 *v12;  // esi
    struct_0 *v13;  // edi
    struct_0 *v14;  // edi
    unsigned int v15;  // ecx
    struct_0 *v16;  // esi
    char *v17;  // edi
    unsigned int v18;  // cc_dep1
    unsigned int v19;  // cc_dep2
    char *v20;  // edi
    struct_0 *v21;  // esi
    unsigned int v22;  // ecx
    struct_0 *v23;  // esi
    char *v24;  // edi
    unsigned int v25;  // cc_dep1
    unsigned int v26;  // cc_dep2
    char *v27;  // edi
    struct_0 *v28;  // esi
    unsigned int v29;  // ecx
    struct_0 *v30;  // esi
    char *v31;  // edi
    unsigned int v32;  // cc_dep1
    unsigned int v33;  // cc_dep2
    char *v34;  // edi
    struct_0 *v35;  // esi

    while (true)
    {
        printf("%p, %p \n");
        if (!fgets(&v1, 128, stdin))
            break;
        v6 = 5;
        v7 = &v1;
        v8 = "auth ";
        while (v6)
        {
            v6 -= 1;
            v9 = v7->field_0;
            v10 = *(v8);
            v11 = &v8[v5];
            v12 = &v7[v5];
            v8 = v11;
            v7 = v12;
            if (v7->field_0 != *(v8))
                break;
        }
        if (!((char)&v1 | (char)x86g_calculate_condition(7, 4, v9, v10, 0) & 255 | 0 | (char)((&v1 | -0x100 | x86g_calculate_condition(7, 4, v9, v10, 0) & 255) - x86g_calculate_condition(2, 4, v9, v10, 0)) & 255))
        {
            auth = malloc(4);
            auth->field_0 = 0;
            v0 = -1;
            v13 = &v2;
            while (v0)
            {
                v0 -= 1;
                v14 = &v13[v5];
                v13 = v14;
                if (!v13->field_0)
                    break;
            }
            if (~(v0) - 1 <= 30)
                strcpy(auth, &v2);
        }
        v15 = 5;
        v16 = &v1;
        v17 = "reset";
        while (v15)
        {
            v15 -= 1;
            v18 = v16->field_0;
            v19 = *(v17);
            v20 = &v17[v5];
            v21 = &v16[v5];
            v17 = v20;
            v16 = v21;
            if (v16->field_0 != *(v17))
                break;
        }
        if (!((char)&v1 | (char)x86g_calculate_condition(7, 4, v18, v19, 0) & 255 | 0 | (char)((&v1 | -0x100 | x86g_calculate_condition(7, 4, v18, v19, 0) & 255) - x86g_calculate_condition(2, 4, v18, v19, 0)) & 255))
            free(auth);
        v22 = 6;
        v23 = &v1;
        v24 = "service";
        while (v22)
        {
            v22 -= 1;
            v25 = v23->field_0;
            v26 = *(v24);
            v27 = &v24[v5];
            v28 = &v23[v5];
            v24 = v27;
            v23 = v28;
            if (v23->field_0 != *(v24))
                break;
        }
        if (!((char)&v1 | (char)x86g_calculate_condition(7, 4, v25, v26, 0) & 255 | 0 | (char)((&v1 | -0x100 | x86g_calculate_condition(7, 4, v25, v26, 0) & 255) - x86g_calculate_condition(2, 4, v25, v26, 0)) & 255))
            service = strdup(&v3);
        v29 = 5;
        v30 = &v1;
        v31 = "login";
        while (v29)
        {
            v29 -= 1;
            v32 = v30->field_0;
            v33 = *(v31);
            v34 = &v31[v5];
            v35 = &v30[v5];
            v31 = v34;
            v30 = v35;
            if (v30->field_0 != *(v31))
                break;
        }
        if (!((char)&v1 | (char)x86g_calculate_condition(7, 4, v32, v33, 0) & 255 | 0 | (char)((&v1 | -0x100 | x86g_calculate_condition(7, 4, v32, v33, 0) & 255) - x86g_calculate_condition(2, 4, v32, v33, 0)) & 255))
        {
            if (!auth->field_20)
                fwrite("Password:\n", 1, 10, stdout);
            else
                system("/bin/sh");
        }
    }
    return 0;
}

int __libc_csu_init()
{
    unsigned int v1;  // [bp+0x4]
    unsigned int v4;  // ebp

    v4 = v1;
    _init();
    return;
}

int sub_80487a1()
{
    return (unsigned int)__libc_csu_fini();
}

void __libc_csu_fini()
{
    return;
}

void __i686.get_pc_thunk.bx()
{
    return;
}

extern struct_0 *__init_array_start;

void __do_global_ctors_aux()
{
    struct struct_0 **v1;  // eax
    struct struct_0 **v2;  // ebx

    v1 = __init_array_start;
    if (__init_array_start != -1)
    {
        v2 = &__init_array_start;
        do
        {
            v2 += 1;
            v1();
            v1 = *(v2);
        } while (v1 != -1);
    }
    return;
}

int _fini()
{
    return (unsigned int)__do_global_dtors_aux();
}

