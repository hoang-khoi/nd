CFLAGS=-c -ansi -pedantic -Wall -Werror -Wfatal-errors -O3
TARGETS=entry.o byte_array.o meaning_array.o meaning.o

all: $(TARGETS)

%.o: %.c
	$(CC) $(CFLAGS) $<

clean:
	rm -f *.o
