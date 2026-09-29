CC = cc

CFLAGS = -Wall -Wextra -Werror -I include

SRCS = $(wildcard src/ft_*.c)
OBJS = $(patsubst src/%.c, bin/%.o, $(SRCS))

TEST_SRCS = $(wildcard tests/test_*.c)
TEST_OBJS = $(patsubst tests/%.c, bin/%.o, $(TEST_SRCS))

TEST_BINS = $(patsubst tests/test_%.c, bin/test_%, $(TEST_SRCS))

test: $(TEST_BINS)
	$(foreach test, $(TEST_BINS), ./$(test);)

bin/test_%: bin/test_%.o libft.a
	$(CC) $^ -o $@

bin/test_%.o: tests/test_%.c
	$(CC) $(CFLAGS) -c $< -o $@

bin/ft_%.o: src/ft_%.c
	$(CC) $(CFLAGS) -c $< -o $@

libft.a: $(OBJS)
	ar rcs $@ $^
