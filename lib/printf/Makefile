NAME = printf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra -g3
AR = ar rcs
SRC = ft_putchar \
	ft_printf \
	ft_print_format \
	ft_check_format \
	ft_correct_format \
	ft_print_str \
	ft_pdec \
	ft_pint \
	ft_pexu \
	ft_pvoid \
	ft_pchar \
	ft_phexl \
	ft_pstr \
	ft_pudec \
	ft_putchar \
	ft_strlcpy \
	ft_putnbr \
	ft_print_num \
	ft_puthex \
	ft_putstr \
	ft_putunbr \
	ft_puthexlu \
	ft_strlen \

SRCS = $(addsuffix .c, $(SRC))
OBJS = $(addsuffix .o, $(SRC))

.c.o:
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(AR) $@ $^

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: clean all

.PHONY: all clean fclean re bonus