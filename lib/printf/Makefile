CC = gcc
CFLAGS = -Wall -Werror -Wextra

NAME = printf.a

SRCS = ft_putchar.c \
	ft_printf.c \
	ft_print_format.c \
	ft_check_format.c \
	ft_correct_format.c \
	ft_print_str.c \
	ft_pdec.c \
	ft_pint.c \
	ft_pexu.c \
	ft_pvoid.c \
	ft_pchar.c \
	ft_phexl.c \
	ft_pstr.c \
	ft_pudec.c \
	ft_putchar.c \
	ft_strlcpy.c \
	ft_putnbr.c \
	ft_print_num.c \
	ft_puthex.c \
	ft_putstr.c \
	ft_putunbr.c \
	ft_puthexlu.c \
	ft_strlen.c \

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
