# libti99-helloworld

This is a simple helloworld application in EA5 format suitable from running from Editor/Assembler or calling using call tipi on a metal TI994a with at [tipi](https://github.com/jedimatt42/tipi/wiki) installed. 

Just a plug, if you need a tipi, arcadeshopper was very helpful giving me some pointers and helping me troubleshoot things, so I recommend getting one from his [store](https://www.arcadeshopper.com/wp/store/#!//p/103690282).
## Build Tools Installation

This requires "GCC for TI", libti99, as well as a few other build tools. The best comprehensive directions on how to get a working enviroment are here:

[libti99](https://atariage.com/forums/topic/164295-gcc-for-the-ti/page/24/?tab=comments#comment-4776745)

Depending on your environment, you may have to stop makeinfo from happening. This will fix a breaking part of the build that dies on texinfo. That can be done by setting the following environment variable:
  
    export set MAKEINFO=true

## Building the code

1. Edit the Makefile to point to paths for your system.
2. Run make

    mkdir -p objects
    tms9900-as crt0_ea5.asm -o objects/crt0_ea5.o
    mkdir -p objects
    tms9900-gcc -c main.c -std=gnu99 -O2 -Werror --save-temp -I/range/share/software/ti994a/libti99 -DBANK_STACK_SIZE=10 -o objects/main.o
    mv *.i *.s objects/
    tms9900-ld objects/crt0_ea5.o objects/main.o --script=linkfile -L/range/share/software/ti994a/libti99 -lti99 -o helloworld.elf -Map=mapfile
    rm -f upper.bin lower.bin objects/HELLOWORL? helloworl?.tfi
    tms9900-objcopy -O binary -j .text helloworld.elf upper.bin
    tms9900-objcopy -O binary -j .data helloworld.elf lower.bin
    python ./ea5split.py A000:upper.bin 2000:lower.bin objects/HELLOWORLD
    ----------------1:1--
    filename: objects/HELLOWORLD
    flag: 0xffff
    len: 0x7f2
    addr: 0xa000
    ----------------2:1--
    filename: objects/HELLOWORLE
    flag: 0x0
    len: 0x14
    addr: 0x2000
    xdm99.py -T objects/HELLOWORL? -f PROGRAM
    for i in helloworl?.tfi; do cp $i `basename $i .tfi`; done
    rm -f .DSK
    xdm99.py HELLOWORLD.DSK --initialize DSDD40T
    xdm99.py HELLOWORLD.DSK -t -a helloworl?
    xdm99.py HELLOWORLD.DSK
    HELLOWORLD:     13 used  1427 free   360 KB  2S/2D 40T  18 S/T
    ----------------------------------------------------------------------------
    HELLOWORLD    9  PROGRAM       2040 B              2021-06-03 18:58:16 C   
    HELLOWORLE    2  PROGRAM         26 B              2021-06-03 18:58:16 C   

## Thanks

Special shout out and thanks to both jedimatt42 and arcadeshopper for giving me some pointers along the way, and, for publishing code that helped me get to a point that things are working. I started with examining TI99-FTP and the example Telenet application from the tipi project to understand the basics of a build enviorment - the Makefile and linkfile in this project are heavily taken from their work.
