CC = cc
CFLAGS = -Wall -Wextra -Werror -I include

test_isalnum: tests/test_isalnum.c src/ft_isalnum.c src/ft_isalpha.c src/ft_isdigit.c
	$(CC) $(CFLAGS) tests/test_isalnum.c src/ft_isalnum.c src/ft_isalpha.c src/ft_isdigit.c -o bin/test_isalnum

test:
	./bin/test_isalnum
