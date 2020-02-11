name = wt
cc = gcc
cflags = -s
wflags = -ggdb -Wall -Werror
src := $(wildcard *.c)
hf := $(wildcard *.h)
obj := $(patsubst %.c,%.o,$(wildcard *.c))
.PHONY = clean cleanobj all

all: $(name)

$(name): $(obj)
	$(cc) $(wflags) -o $@ $^
$(obj): %.o: %.c $(hf)
	$(cc) $(wflags) -c $<
clean: cleanobj
	$(RM) $(name)
cleanobj:
	$(RM) *.o
