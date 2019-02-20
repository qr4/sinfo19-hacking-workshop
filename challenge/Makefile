CC=gcc
CFLAGS=-Wall -O0

.PHONY: clean

all: challenge

challenge: challenge.c
	$(CC) -no-pie -fno-stack-protector -o challenge -z execstack challenge.c $(CFLAGS)

clean:
	rm *.o challenge
