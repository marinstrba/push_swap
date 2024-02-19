CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = pushswap.a

SRCS = ft_add_node.c \
			ft_arg_to_node.c \
			ft_error_message.c \
			ft_stack_is_sorted.c \
			ft_stack_length.c \
			ft_find_min.c \
			ft_find_max.c \
			ft_get_cheapest.c \
			ft_set_index.c \
			ft_cost_analysis.c \
			ft_find_target.c \
			ft_has_duplicate.c \
			ft_set_cheapest.c \
			ft_move.c \
			ft_min_on_top.c
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