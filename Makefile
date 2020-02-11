cc=gcc
cflags=-s
dflags=-ggdb
wflags=-Wall -Werror
name=nav.bin
hfile=nav.h
src=main.c mypwd.c myls.c
obj=main.o mypwd.o myls.o
.PHONY=clean all debug

all: $(name)

$(name): $(obj)
	$(cc) $(wflags) $(cflags) -o $@ $^

$(obj): $(src)
	$(cc) $(wflags) -c $^
debug:
	$(cc) $(wflags) $(dflags) -c $(src)
	$(cc) $(wflags) $(dflags) -o $(name) $(obj)
clean:
	$(RM) $(name) *.o
