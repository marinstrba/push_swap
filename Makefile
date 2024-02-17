CC = gcc
CFLAGS = -Wall -Wextra -Werror

LIBFT_DIR = lib/libft
PUSHSWAP_DIR = lib/pushswap

LIBFT = $(LIBFT_DIR)/libft.a
PUSHSWAP = $(PUSHSWAP_DIR)/pushswap.a

INCLUDES = -I$(LIBFT_DIR) -I$(PUSHSWAP_DIR)

all: libft pushswap push_swap

libft:
	$(MAKE) -C $(LIBFT_DIR)

pushswap:
	$(MAKE) -C $(PUSHSWAP_DIR)

server: libft pushswap
	$(CC) $(CFLAGS) $(INCLUDES) src/push_swap.c $(LIBFT) $(PUSHSWAP) -o push_swap

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(PUSHSWAP_DIR) clean

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(MAKE) -C $(PUSHSWAP_DIR) fclean
	rm -f server client

re: fclean all

.PHONY: all libft pushswap push_swap clean fclean re