mysuffix: main.2.o suffix.o
	gcc -Wall -ansi -pedantic main.2.o suffix.o -o mysuffix
main.2.o:	main.2.c
	gcc -c -Wall -ansi -pedantic main.2.c -o main.2.o
suffix.o: suffix.c data.2.h
	gcc -c -Wall -ansi -pedantic suffix.c -o suffix.o
