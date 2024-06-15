#######################################################################
# General variables. Twiddle as you see fit.
#######################################################################

LIBTI99?=$(HOME)/Projects/ti994a/libti99
PATH := $(PATH):$(HOME)/Projects/ti994a/tms9900-gcc/bin:$(HOME)/Projects/ti994a/xdt99/

#######################################################################

GAS=tms9900-as
LD=tms9900-ld
CC=tms9900-gcc
OBJCOPY=tms9900-objcopy
OBJDUMP=tms9900-objdump
AR=tms9900-ar
ELF2EA5=elf2ea5
EA5_SPLIT=ea5split

SFNAME=helloscr
FNAME=helloscrl
UCFNAME=$(shell echo -n $(FNAME) | tr 'a-z' 'A-Z')
UCSFNAME=$(shell echo -n $(SFNAME) | tr 'a-z' 'A-Z')

LDFLAGS=\
  --section-start .text=a000 --section-start .data=2080 -M -L$(LIBTI99) -lti99

CFLAGS=\
  -std=c99 -O2 -Werror --save-temp -I$(LIBTI99) -DBANK_STACK_SIZE=10

SRCS:=$(sort $(wildcard *.c) $(wildcard *.asm))

OBJECT_LIST:=$(SRCS:.c=.o)
OBJECT_LIST:=$(OBJECT_LIST:.asm=.o)

LINK_OBJECTS:=$(addprefix objects/,$(OBJECT_LIST))

all: $(UCFNAME).DSK

$(FNAME).elf: $(LINK_OBJECTS)
	$(LD) $(LINK_OBJECTS) $(LDFLAGS) -o $(FNAME).elf > $(FNAME).map

$(UCFNAME): $(FNAME).elf
	$(ELF2EA5) $(FNAME).elf $(FNAME).bin
	$(EA5_SPLIT) $(FNAME).bin

$(UCFNAME).DSK: $(UCFNAME)
	rm -f $(UCSNAME).DSK
	xdm99.py $(UCFNAME).DSK --initialize DSDD40T
	xdm99.py $(UCFNAME).DSK -t -a $(UCSFNAME)?
	xdm99.py $(UCFNAME).DSK

.phony clean:
	rm -fr objects
	rm -f *.elf
	rm -f *.bin
	rm -f *.map
	rm -f *.DSK
	rm -f *.tfi
	rm -f $(SFNAME)?


objects/%.o: %.asm
	mkdir -p objects
	$(GAS) $< -o $@

objects/%.o: %.c
	mkdir -p objects
	$(CC) -c $< $(CFLAGS) -o $@
	mv *.i *.s objects/

