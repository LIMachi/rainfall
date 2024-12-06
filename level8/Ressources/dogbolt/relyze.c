// VA=0x80483c4
void __cdecl _init( void )
{
    void * v1; // [esp-12]

    code_0x3CD();
    if( *((uint8_t *)v1 + (uint8_t)5723) != 0 ) {
        __gmon_start___3();
    }
    frame_dummy();
    __do_global_ctors_aux();
}

// VA=0x8048410
int __cdecl printf_2( char * __format, ... )
{
    goto printf_1;
}

// VA=0x8048416
void __cdecl func_0x416( void )
{
    goto data_0x1A34;
}

// VA=0x8048420
void __cdecl free_2( void * __ptr )
{
    goto free_1;
}

// VA=0x8048426
void __cdecl func_0x426( void )
{
    goto data_0x1A34;
}

// VA=0x8048430
char * __cdecl strdup_2( char * __s )
{
    goto strdup_1;
}

// VA=0x8048436
void __cdecl func_0x436( void )
{
    goto data_0x1A34;
}

// VA=0x8048440
char * __cdecl fgets_2( char * __s, int __n, struct _IO_FILE * __stream )
{
    goto fgets_1;
}

// VA=0x8048446
void __cdecl func_0x446( void )
{
    goto data_0x1A34;
}

// VA=0x8048450
unsigned int __cdecl fwrite_2( void * __ptr, unsigned int __size, unsigned int __n, struct _IO_FILE * __s )
{
    goto fwrite_1;
}

// VA=0x8048456
void __cdecl func_0x456( void )
{
    goto data_0x1A34;
}

// VA=0x8048460
char * __cdecl strcpy_2( char * __dest, char * __src )
{
    goto strcpy_1;
}

// VA=0x8048466
void __cdecl func_0x466( void )
{
    goto data_0x1A34;
}

// VA=0x8048470
void * __cdecl malloc_2( unsigned int __size )
{
    goto malloc_1;
}

// VA=0x8048476
void __cdecl func_0x476( void )
{
    goto data_0x1A34;
}

// VA=0x8048480
int __cdecl system_2( char * __command )
{
    goto system_1;
}

// VA=0x8048486
void __cdecl func_0x486( void )
{
    goto data_0x1A34;
}

// VA=0x8048490
void __cdecl __gmon_start___3( void )
{
    goto __gmon_start__;
}

// VA=0x8048496
void __cdecl func_0x496( void )
{
    goto data_0x1A34;
}

// VA=0x80484a0
void __cdecl __libc_start_main_2( int32_t p1, int32_t p2, int32_t p3, int32_t p4, int32_t p5, int32_t p6, int32_t p7, int32_t p8 )
{
    goto __libc_start_main;
}

// VA=0x80484a6
void __cdecl func_0x4A6( void )
{
    goto data_0x1A34;
}

// VA=0x80484b0
noreturn void __cdecl _start( void )
{
    int32_t return_address; // [esp+0]
     stack_0x4; // [esp+4]
    int32_t eax; // eax
    int32_t edx; // edx

    __libc_start_main_2( &main, return_address, &stack_0x4, &__libc_csu_init, &__libc_csu_fini, edx, (&stack_0x4 & 0xFFFFFFF0) - 4, eax );
    __asm.hlt();
    // Note: Program behavior is undefined if control flow reaches this location.
}

// VA=0x80484e0
void __cdecl __do_global_dtors_aux( void )
{
    if( completed.6159 == 0 ) {
        if( dtor_idx.6161 < 0 ) {
            do {
                dtor_idx.6161 += 1;
                (*(&__DTOR_END__ + dtor_idx.6161 * 4))();
            } while( dtor_idx.6161 < 0 );
        }
        completed.6159 = 1;
    }
}

// VA=0x8048540
void __cdecl frame_dummy( void )
{
}

// VA=0x8048564
int32_t __cdecl main( void )
{
    int32_t v13;
    uint32_t local_0x90; // [esp-144]
    uint32_t local_0x8B; // [esp-139]
    void * v5; // esi
    void * v4; // edi
    char * v1; // eax
    int32_t v6; // ecx
    void * v15; // esi
    void * v11; // edi
    int32_t v7; // edx
    uint32_t v3; // cf
    void * v21; // esi
    void * v14; // edi
    uint32_t v2; // zf
    void * v28; // esi
    void * v20; // edi
    void * v10; // eax
    int32_t v12; // ecx
    int32_t v17; // edx
    void * v27; // edi
    int32_t v16; // ecx
    int32_t v23; // edx
    int32_t v30; // edx
    uint32_t v9; // cf
    int32_t v22; // ecx
    uint32_t v8; // zf
    int32_t v29; // ecx
    uint32_t v19; // cf
    uint32_t v18; // zf
    char * v26; // eax
    uint32_t v25; // cf
    uint32_t v24; // zf

    while( 1 ) {
        printf_2( "%p, %p \n", auth, service );
        v1 = fgets_2( &local_0x90, 128, stdin );
        if( v1 == 0 ) {
            break;
        }
        v2 = v1 == 0;
        v3 = 0;
        v4 = "auth ";
        v5 = &local_0x90;
        v6 = 5;
        while( v6 != 0 ) {
            if( *v4 != *v5 ) {
                v2 = *v4 == *v5;
                v3 = *v5 < *v4;
                break;
            }
            v2 = *v4 == *v5;
            v3 = *v5 < *v4;
            (uint8_t *)v4 += 1;
            (uint8_t *)v5 += 1;
            v6 += -1;
        }
        v7 = &local_0x90 & 0xFFFFFF00 | (v3 | v2) != 1;
        v8 = (int8_t)(v7 & 0xFFFFFF00 | (uint8_t)v7 - (&code_0x7F5+0xB | v3 == 1)) == 0;
        if( (int8_t)(v7 & 0xFFFFFF00 | (uint8_t)v7 - (&code_0x7F5+0xB | v3 == 1)) == 0 ) {
            v10 = malloc_2( 4 );
            auth = v10;
            *auth = 0;
            v11 = &local_0x90 + 5;
            v12 = -1;
            while( v12 != 0 ) {
                v13 = v12 + -1;
                if( (uint8_t)-*v11 == 0 ) {
                    v12 = v13;
                    break;
                }
                v12 += -1;
                (uint8_t *)v11 += 1;
            }
            v9 = ~v12 < 31;
            v8 = ~v12 == 31;
            if( ~v12 < 32 ) {
                strcpy_2( auth, &local_0x8B );
            }
        } else {
            v9 = 0;
        }
        v14 = "reset";
        v15 = &local_0x90;
        v16 = 5;
        while( v16 != 0 ) {
            if( *v14 != *v15 ) {
                v8 = *v14 == *v15;
                v9 = *v15 < *v14;
                break;
            }
            v8 = *v14 == *v15;
            v9 = *v15 < *v14;
            (uint8_t *)v14 += 1;
            (uint8_t *)v15 += 1;
            v16 += -1;
        }
        v17 = &local_0x90 & 0xFFFFFF00 | (v9 | v8) != 1;
        v18 = (int8_t)(v17 & 0xFFFFFF00 | (uint8_t)v17 - (&code_0x7F5+0xB | v9 == 1)) == 0;
        if( (int8_t)(v17 & 0xFFFFFF00 | (uint8_t)v17 - (&code_0x7F5+0xB | v9 == 1)) == 0 ) {
            free_2( auth );
        }
        v19 = 0;
        v20 = "service";
        v21 = &local_0x90;
        v22 = 6;
        while( v22 != 0 ) {
            if( *v20 != *v21 ) {
                v18 = *v20 == *v21;
                v19 = *v21 < *v20;
                break;
            }
            v18 = *v20 == *v21;
            v19 = *v21 < *v20;
            (uint8_t *)v20 += 1;
            (uint8_t *)v21 += 1;
            v22 += -1;
        }
        v23 = &local_0x90 & 0xFFFFFF00 | (v19 | v18) != 1;
        v24 = (int8_t)(v23 & 0xFFFFFF00 | (uint8_t)v23 - (&code_0x7F5+0xB | v19 == 1)) == 0;
        if( (int8_t)(v23 & 0xFFFFFF00 | (uint8_t)v23 - (&code_0x7F5+0xB | v19 == 1)) == 0 ) {
            v26 = strdup_2( &local_0x90 + 7 );
            service = v26;
            v24 = &local_0x90 == 4294967289;
            v25 = &local_0x90 < 0;
        } else {
            v25 = 0;
        }
        v27 = "login";
        v28 = &local_0x90;
        v29 = 5;
        while( v29 != 0 ) {
            if( *v27 != *v28 ) {
                v24 = *v27 == *v28;
                v25 = *v28 < *v27;
                break;
            }
            v24 = *v27 == *v28;
            v25 = *v28 < *v27;
            (uint8_t *)v27 += 1;
            (uint8_t *)v28 += 1;
            v29 += -1;
        }
        v30 = &local_0x90 & 0xFFFFFF00 | (v25 | v24) != 1;
        if( (int8_t)(v30 & 0xFFFFFF00 | (uint8_t)v30 - (&code_0x7F5+0xB | v25 == 1)) == 0 ) {
            if( *(auth + 32) == 0 ) {
                fwrite_2( "Password:\n", 1, 10, stdout );
                continue;
            }
            system_2( "/bin/sh" );
        }
    }
    return 0;
}

// VA=0x8048740
void __cdecl __libc_csu_init( int32_t p1, int32_t p2, int32_t p3 )
{
    _init();
}

// VA=0x80487a1
void __cdecl __libc_csu_fini_1( void )
{
}

// VA=0x80487b0
inline void __cdecl __libc_csu_fini( void )
{
}

// VA=0x80487b2
inline void __cdecl __i686.get_pc_thunk.bx( void )
{
}

// VA=0x80487c0
void __cdecl __do_global_ctors_aux( void )
{
    uint32_t v2;
    void * v1; // ebx

    if( __CTOR_LIST__ != 4294967295 ) {
        v1 = &__CTOR_LIST__;
        v2 = __CTOR_LIST__;
        while( 1 ) {
            v2();
            v2 = *((uint8_t *)v1 + (uint8_t)4294967292);
            if( v2 == 4294967295 ) {
                break;
            }
            (uint8_t *)v1 += (uint8_t)4294967292;
        }
    }
}

// VA=0x80487ec
void __cdecl _fini( void )
{
    code_0x7F5();
    __do_global_dtors_aux();
}

// VA=0x8049ac0
void __unknown __gmon_start___2( void )
{
    goto &__gmon_start___2;
}

// VA=0x8049ac4
int __cdecl printf( char * __format, ... )
{
    goto &printf;
}

// VA=0x8049ac8
void __cdecl free( void * __ptr )
{
    goto &free;
}

// VA=0x8049acc
char * __cdecl strdup( char * __s )
{
    goto &strdup;
}

// VA=0x8049ad0
char * __cdecl fgets( char * __s, int __n, struct _IO_FILE * __stream )
{
    goto &fgets;
}

// VA=0x8049ad4
unsigned int __cdecl fwrite( void * __ptr, unsigned int __size, unsigned int __n, struct _IO_FILE * __s )
{
    goto &fwrite;
}

// VA=0x8049ad8
char * __cdecl strcpy( char * __dest, char * __src )
{
    goto &strcpy;
}

// VA=0x8049adc
void * __cdecl malloc( unsigned int __size )
{
    goto &malloc;
}

// VA=0x8049ae0
int __cdecl system( char * __command )
{
    goto &system;
}

// VA=0x8049ae4
void __unknown __libc_start_main_1( void )
{
    goto &__libc_start_main_1;
}


