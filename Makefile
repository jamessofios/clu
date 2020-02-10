cc=gcc
#choose to either strip, or debug
#cflags=-s
dflags=-ggdb
#####
wflags=-Wall -Werror
name=nav.bin
hfile=nav.h
src=main.c mypwd.c myls.c
obj=main.o mypwd.o myls.o
.PHONY=clean all test

all: $(name)

$(name): $(obj)
	$(cc) $(wflags) $(dflags) $(cflags) -o $@ $^

$(obj): $(src)
	$(cc) $(wflags) $(dflags) -c $^
clean:
	$(RM) $(name) *.o
