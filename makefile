all: work05.o
	gcc -o work05 work05.c

work05.o:
	gcc -c work05.c

run:
	./work05
