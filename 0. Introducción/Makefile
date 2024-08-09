# Archivo Makefile
# Autor: Ariel Ortiz

CC=g++

ejecutable: main.o fact.o
	$(CC) main.o fact.o -o ejecutable

main.o: main.cpp fact.h
	$(CC) main.cpp -c

fact.o: fact.cpp fact.h
	$(CC) fact.cpp -c

clean:
	rm -f ejecutable main.o fact.o
