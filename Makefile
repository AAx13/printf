all:
	gcc -Wall -Werror -pedantic -Wextra *.c
clean:
	rm a.out *~
