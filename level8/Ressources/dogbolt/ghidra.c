#include "out.h"



int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;

  __gmon_start__();
  frame_dummy();
  iVar1 = __do_global_ctors_aux();
  return iVar1;
}



void FUN_08048400(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;

  iVar1 = printf(__format);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strdup(char *__s)

{
  char *pcVar1;

  pcVar1 = strdup(__s);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;

  pcVar1 = fgets(__s,__n,__stream);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;

  sVar1 = fwrite(__ptr,__size,__n,__s);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;

  pcVar1 = strcpy(__dest,__src);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;

  pvVar1 = malloc(__size);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int system(char *__command)

{
  int iVar1;

  iVar1 = system(__command);
  return iVar1;
}



void __gmon_start__(void)

{
  __gmon_start__();
  return;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined auStack_4 [4];

  __libc_start_main(main,param_2,&stack0x00000004,__libc_csu_init,__libc_csu_fini,param_1,auStack_4)
  ;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x0804850a)
// WARNING: Removing unreachable block (ram,0x08048510)

void __do_global_dtors_aux(void)

{
  if (completed_6159 == '\0') {
    completed_6159 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x08048558)

void frame_dummy(void)

{
  return;
}



undefined4 main(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  undefined uVar10;
  undefined uVar11;
  bool bVar12;
  undefined uVar13;
  byte bVar14;
  byte local_90 [5];
  char local_8b [2];
  char acStack_89 [125];

  bVar14 = 0;
  do {
    printf("%p, %p \n",auth,service);
    pcVar4 = fgets((char *)local_90,0x80,stdin);
    bVar9 = false;
    bVar12 = pcVar4 == (char *)0x0;
    if (bVar12) {
      return 0;
    }
    iVar5 = 5;
    pbVar7 = local_90;
    pbVar8 = (byte *)"auth ";
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar9 = *pbVar7 < *pbVar8;
      bVar12 = *pbVar7 == *pbVar8;
      pbVar7 = pbVar7 + (uint)bVar14 * -2 + 1;
      pbVar8 = pbVar8 + (uint)bVar14 * -2 + 1;
    } while (bVar12);
    uVar10 = 0;
    uVar13 = (!bVar9 && !bVar12) == bVar9;
    if ((bool)uVar13) {
      auth = (char *)malloc(4);
      pcVar4 = auth + 1;
      pcVar2 = auth + 2;
      pcVar3 = auth + 3;
      auth[0] = '\0';
      *pcVar4 = '\0';
      *pcVar2 = '\0';
      *pcVar3 = '\0';
      uVar6 = 0xffffffff;
      pcVar4 = local_8b;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + (uint)bVar14 * -2 + 1;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6 - 1;
      uVar10 = uVar6 < 0x1e;
      uVar13 = uVar6 == 0x1e;
      if (uVar6 < 0x1f) {
        strcpy(auth,local_8b);
      }
    }
    iVar5 = 5;
    pbVar7 = local_90;
    pbVar8 = (byte *)"reset";
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      uVar10 = *pbVar7 < *pbVar8;
      uVar13 = *pbVar7 == *pbVar8;
      pbVar7 = pbVar7 + (uint)bVar14 * -2 + 1;
      pbVar8 = pbVar8 + (uint)bVar14 * -2 + 1;
    } while ((bool)uVar13);
    uVar11 = 0;
    uVar10 = (!(bool)uVar10 && !(bool)uVar13) == (bool)uVar10;
    if ((bool)uVar10) {
      free(auth);
    }
    iVar5 = 6;
    pbVar7 = local_90;
    pbVar8 = (byte *)"service";
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      uVar11 = *pbVar7 < *pbVar8;
      uVar10 = *pbVar7 == *pbVar8;
      pbVar7 = pbVar7 + (uint)bVar14 * -2 + 1;
      pbVar8 = pbVar8 + (uint)bVar14 * -2 + 1;
    } while ((bool)uVar10);
    uVar13 = 0;
    uVar10 = (!(bool)uVar11 && !(bool)uVar10) == (bool)uVar11;
    if ((bool)uVar10) {
      uVar13 = (byte *)0xfffffff8 < local_90;
      uVar10 = acStack_89 == (char *)0x0;
      service = strdup(acStack_89);
    }
    iVar5 = 5;
    pbVar7 = local_90;
    pbVar8 = (byte *)"login";
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      uVar13 = *pbVar7 < *pbVar8;
      uVar10 = *pbVar7 == *pbVar8;
      pbVar7 = pbVar7 + (uint)bVar14 * -2 + 1;
      pbVar8 = pbVar8 + (uint)bVar14 * -2 + 1;
    } while ((bool)uVar10);
    if ((!(bool)uVar13 && !(bool)uVar10) == (bool)uVar13) {
      if (*(int *)(auth + 0x20) == 0) {
        fwrite("Password:\n",1,10,stdout);
      }
      else {
        system("/bin/sh");
      }
    }
  } while( true );
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx
// WARNING: Removing unreachable block (ram,0x08048770)
// WARNING: Removing unreachable block (ram,0x08048778)

void __libc_csu_init(void)

{
  EVP_PKEY_CTX *in_stack_ffffffd4;

  _init(in_stack_ffffffd4);
  return;
}



void __libc_csu_fini(void)

{
  return;
}



// WARNING: This is an inlined function

void __i686_get_pc_thunk_bx(void)

{
  return;
}



void __do_global_ctors_aux(void)

{
  code *pcVar1;
  int *piVar2;

  if (__CTOR_LIST__ != (code *)0xffffffff) {
    piVar2 = (int *)&__CTOR_LIST__;
    pcVar1 = __CTOR_LIST__;
    do {
      piVar2 = piVar2 + -1;
      (*pcVar1)();
      pcVar1 = (code *)*piVar2;
    } while (pcVar1 != (code *)0xffffffff);
  }
  return;
}



void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



