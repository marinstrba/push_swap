CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = pushswap.a

SRCS = add_node.c \
		convert_str_to_linkedlist.c
OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re