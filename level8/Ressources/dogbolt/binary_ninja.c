int32_t _init()
{
    if (__gmon_start__)
        __gmon_start__();

    frame_dummy();
    return __do_global_ctors_aux();
}

int32_t sub_8048400()
{
    int32_t var_4 = data_8049a30;
    /* jump -> data_8049a34 */
}

int32_t printf(char const* format, ...)
{
    /* tailcall */
    return printf();
}

int32_t sub_8048416()
{
    /* tailcall */
    return sub_8048400(0);
}

void free(void* mem)
{
    /* tailcall */
    return free(mem);
}

int32_t sub_8048426()
{
    /* tailcall */
    return sub_8048400(8);
}

char* strdup(char const* s)
{
    /* tailcall */
    return strdup(s);
}

int32_t sub_8048436()
{
    /* tailcall */
    return sub_8048400(0x10);
}

char* fgets(char* buf, int32_t n, FILE* fp)
{
    /* tailcall */
    return fgets(buf, n, fp);
}

int32_t sub_8048446()
{
    /* tailcall */
    return sub_8048400(0x18);
}

size_t fwrite(void const* buf, size_t size, size_t count, FILE* fp)
{
    /* tailcall */
    return fwrite(buf, size, count, fp);
}

int32_t sub_8048456()
{
    /* tailcall */
    return sub_8048400(0x20);
}

char* strcpy(char* arg1, char const* arg2)
{
    /* tailcall */
    return strcpy(arg1, arg2);
}

int32_t sub_8048466()
{
    /* tailcall */
    return sub_8048400(0x28);
}

int32_t malloc(size_t bytes)
{
    /* tailcall */
    return malloc(bytes);
}

int32_t sub_8048476()
{
    /* tailcall */
    return sub_8048400(0x30);
}

int32_t system(char const* line)
{
    /* tailcall */
    return system(line);
}

int32_t sub_8048486()
{
    /* tailcall */
    return sub_8048400(0x38);
}

int32_t __gmon_start__()
{
    /* tailcall */
    return __gmon_start__();
}

int32_t sub_8048496()
{
    /* tailcall */
    return sub_8048400(0x40);
}

void __libc_start_main(int32_t (* main)(int32_t argc, char** argv, char** envp), int32_t argc, char** ubp_av, void (* init)(), void (* fini)(), void (* rtld_fini)(), void* stack_end) __noreturn
{
    /* tailcall */
    return __libc_start_main(main, argc, ubp_av, init, fini, rtld_fini, stack_end);
}

int32_t sub_80484a6()
{
    /* tailcall */
    return sub_8048400(0x48);
}

void __convention("regparm") _start(int32_t arg1, void (* arg2)()) __noreturn
{
    int32_t stack_end = arg1;
    __libc_start_main(main, __return_addr, &ubp_av, __libc_csu_init, __libc_csu_fini, arg2, &stack_end);
    /* no return */
}

void __do_global_dtors_aux()
{
    if (!completed.6159)
    {
        for (uint32_t dtor_idx.6161_1 = dtor_idx.6161; dtor_idx.6161_1 < 0; dtor_idx.6161_1 = dtor_idx.6161)
        {
            dtor_idx.6161 = dtor_idx.6161_1 + 1;
            __DTOR_LIST__[dtor_idx.6161_1 + 1]();
        }

        completed.6159 = 1;
    }
}

int32_t frame_dummy()
{
    return __JCR_END__;
}

int32_t main(int32_t argc, char** argv, char** envp)
{
    while (true)
    {
        uint32_t* const fp;
        printf("%p, %p \n", auth, service, fp);
        bool c_1 = false;
        void buf;
        bool z_1 = !fgets(&buf, 0x80, stdin);

        if (z_1)
            break;

        int32_t i = 5;
        void* esi_1 = &buf;
        char const* const edi_1 = "auth ";

        while (i)
        {
            char temp0_1 = *esi_1;
            char const temp1_1 = *edi_1;
            c_1 = temp0_1 < temp1_1;
            z_1 = temp0_1 == temp1_1;
            esi_1 += 1;
            edi_1 = &edi_1[1];
            i -= 1;

            if (!z_1)
                break;
        }

        bool c_2 = false;
        bool z_2 = !((!z_1 && !c_1) - c_1);

        if (z_2)
        {
            auth = malloc(4);
            **&auth = 0;
            int32_t i_1 = 0xffffffff;
            void var_8b;
            void* edi_2 = &var_8b;

            while (i_1)
            {
                bool cond:4_1 = 0 != *edi_2;
                edi_2 += 1;
                i_1 -= 1;

                if (!cond:4_1)
                    break;
            }

            c_2 = ~i_1 - 1 < 0x1e;
            z_2 = ~i_1 == 0x1f;

            if (z_2 || c_2)
                strcpy(auth, &var_8b);
        }

        int32_t i_2 = 5;
        void* esi_2 = &buf;
        char const* const edi_3 = "reset";

        while (i_2)
        {
            char temp2_1 = *esi_2;
            char const temp3_1 = *edi_3;
            c_2 = temp2_1 < temp3_1;
            z_2 = temp2_1 == temp3_1;
            esi_2 += 1;
            edi_3 = &edi_3[1];
            i_2 -= 1;

            if (!z_2)
                break;
        }

        bool c_3 = false;
        bool z_3 = !((!z_2 && !c_2) - c_2);

        if (z_3)
            free(auth);

        int32_t i_3 = 6;
        void* esi_3 = &buf;
        char const* const edi_4 = "service";

        while (i_3)
        {
            char temp4_1 = *esi_3;
            char const temp5_1 = *edi_4;
            c_3 = temp4_1 < temp5_1;
            z_3 = temp4_1 == temp5_1;
            esi_3 += 1;
            edi_4 = &edi_4[1];
            i_3 -= 1;

            if (!z_3)
                break;
        }

        bool c_4 = false;
        bool z_4 = !((!z_3 && !c_3) - c_3);

        if (z_4)
        {
            c_4 = &buf >= 0xfffffff9;
            z_4 = &buf == 0xfffffff9;
            void s;
            service = strdup(&s);
        }

        int32_t i_4 = 5;
        void* esi_4 = &buf;
        char const* const edi_5 = "login";

        while (i_4)
        {
            char temp7_1 = *esi_4;
            char const temp8_1 = *edi_5;
            c_4 = temp7_1 < temp8_1;
            z_4 = temp7_1 == temp8_1;
            esi_4 += 1;
            edi_5 = &edi_5[1];
            i_4 -= 1;

            if (!z_4)
                break;
        }

        if (!((!z_4 && !c_4) - c_4))
        {
            if (!*(auth + 0x20))
            {
                fp = stdout;
                fwrite("Password:\n", 1, 0xa, fp);
            }
            else
                system("/bin/sh");
        }
    }

    return 0;
}

void __libc_csu_init()
{
    _init();
}

void j___libc_csu_fini()
{
    /* tailcall */
    return __libc_csu_fini();
}

void __libc_csu_fini() __pure
{
    return;
}

int32_t __i686.get_pc_thunk.bx() __pure
{
    return;
}

int32_t __do_global_ctors_aux()
{
    return 0xffffffff;
}

int32_t _fini()
{
    return __do_global_dtors_aux();
}

