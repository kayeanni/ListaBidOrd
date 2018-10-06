all: ejecutable

main.o: main.c llistaBidOrd.h
	gcc -c main.c

llistaBidOrd.o: llistaBidOrd.c llistaBidOrd.h
	gcc -c llistaBidOrd.c

ejecutable: main.o llistaBidOrd.o
	gcc main.o llistaBidOrd.o -o ejecutable

clean: rm *.o
