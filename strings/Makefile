CC = cc
CFLAGS = -Wall -Wextra -Werror -I include

bin/test_%: tests/test_%.c src/ft_%.c
	$(CC) $(CFLAGS) $^ -o $@

test: bin/test_isalnum
	./bin/test_isalnum
