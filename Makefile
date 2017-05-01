prog: prog.c
	gcc -Wall -g -o prog prog.c
	./prog
	valgrind --leak-check=full -v ./prog

clean:
	rm prog

.PHONY: clean
