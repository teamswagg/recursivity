#variables
CC= gcc
CFLAGS= -W -Wall -Wmissing-prototypes -pedantic --std=c99
LDFLAGS= 
EXEC= josephus clean
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)

#compilation
all: $(EXEC)

josephus: main.o recursivite.o liste_circulaire.o
	$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

#utilitaires
clean:
	rm -rf *.o

mrproper: clean
	rm -rf  $(EXEC)

