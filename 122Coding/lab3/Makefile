CC=gcc
CFLAGS= -g -Wall

all: permutations russian

permutations: permutations.c randint
	$(CC) $(CFLAGS) randint.o permutations.c -o permutations
	
russian: russian.c
	$(CC) $(CFLAGS) russian.c -o russian -lm
	
randint: randint.c
	$(CC) $(CFLAGS) -c randint.c

clean:
	rm russian permutations
