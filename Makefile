# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maurian <maurian@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 16:22:39 by mstrba            #+#    #+#              #
#    Updated: 2023/11/25 22:04:14 by maurian          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -fPIC

INCLUDES = -Ilib/LIBFT -Ilib

SRCDIR = src
SUBDIRS = error input sort utils
LIBDIR = lib
LIBFTDIR = $(LIBDIR)/LIBFT

SRC = $(wildcard $(SRCDIR)/*.c) \
	$(foreach dir, $(SUBDIRS), $(wildcard $(SRCDIR)/$(dir)/*.c))
OBJ = $(SRC:.c=.o)

EXECUTABLE = myprogram

all: libft $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ $^ -L$(LIBFTDIR) -lft

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

libft:
	$(MAKE) -C $(LIBFTDIR)

clean:
	rm -f $(SRCDIR)/*.o $(SRCDIR)/*/*.o
	$(MAKE) -C $(LIBFTDIR) clean

fclean: clean
	rm -f $(EXECUTABLE)
	$(MAKE) -C $(LIBFTDIR) fclean

re: fclean all

.PHONY: all libft minilibx clean fclean re
