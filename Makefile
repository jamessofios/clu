cc=gcc
cflags=-Wall -Werror -ggdb
name=nav.bin
hfile=nav.h
src=main.c mypwd.c myls.c
obj=main.o mypwd.o myls.o
.PHONY=clean all test

all: $(name)

$(name): $(obj)
	$(cc) $(cflags) -o $@ $^

$(obj): $(src)
	$(cc) $(cflags) -c $^
clean:
	$(RM) $(name) *.o
