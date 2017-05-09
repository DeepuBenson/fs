hello: main.o fun.o
	gcc -o hello main.o fun.o
main.o: main.c
	gcc -c main.c
fun.o: fun.c
	gcc -c fun.c
clean:
	rm -f main.o fun.o hello
