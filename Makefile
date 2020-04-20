CFLAGS=-c -ansi -pedantic -Wall -Werror -Wfatal-errors -O3
TARGETS=cstream.o value.o node.o

all: $(TARGETS)

%.o: %.c
	$(CC) $(CFLAGS) $<

clean:
	rm -f *.o
