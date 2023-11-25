# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mstrba <mstrba@student.42prague.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/22 13:48:30 by mcombeau          #+#    #+#              #
#    Updated: 2023/11/21 21:22:54 by mstrba           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra -fPIC
AR = ar rcs
SRC = ft_isalpha \
	ft_isdigit \
	ft_isalnum \
	ft_isascii \
	ft_isprint \
	ft_strlen \
	ft_memset \
	ft_bzero \
	ft_memcpy \
	ft_memmove \
	ft_strlcpy \
	ft_strlcat \
	ft_toupper \
	ft_tolower \
	ft_strchr \
	ft_strrchr \
	ft_strncmp \
	ft_memchr \
	ft_memcmp \
	ft_strnstr \
	ft_atoi \
	ft_calloc \
	ft_strdup \
	ft_substr \
	ft_strjoin \
	ft_strtrim \
	ft_split \
	ft_itoa \
	ft_strmapi \
	ft_striteri \
	ft_putchar_fd \
	ft_putstr_fd \
	ft_putendl_fd \
	ft_putnbr_fd \
	get_next_line \
	ft_putchar \
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

SRCS = $(addsuffix .c, $(SRC))
OBJS = $(addsuffix .o, $(SRC))


.c.o: $(SRCS) $(BONUS_SRCS)
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
