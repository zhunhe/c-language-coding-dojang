a.out: 78.3_main.o 78.3_print.o
	gcc -o a.out 78.3_main.o 78.3_print.o

78.3_main.o: 78.3_main.c
	gcc -c -o 78.3_main.o 78.3_main.c

78.3_print.o: 78.3_print.c
	gcc -c -o 78.3_print.o 78.3_print.c

clean:
	rm *.o a.out
