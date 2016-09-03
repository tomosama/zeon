src=$(wildcard *.c)
obj=$(patsubst %.c,%.o, $(src))

CC=gcc
CFLAGS=-g
LDFLAGS=
CPPFLAGS=

dest=libmymath.a
#dest=a.out


$(dest):$(obj)
	ar rcs $@ $^
#$(CC) $(LDFLAGS) $^ -o $@
%.o:%.c
	$(CC)  $(CFLAGS) -c $^

.PHONY:clean
clean:
	-rm -f $(obj) $(dest)
