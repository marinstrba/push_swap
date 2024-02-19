CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRCS = ft_atol.c \
       ft_putstr.c \
       ft_check_number.c \
       ft_isdigit.c	\
		ft_split.c \
		ft_free_arr.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_free_list.c \
		ft_print_stack.c

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