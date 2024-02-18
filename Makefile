CC = gcc
CFLAGS = -Wall -Wextra -Werror

LIBFT_DIR = lib/libft
PUSHSWAP_DIR = lib/pushswap

LIBFT = $(LIBFT_DIR)/libft.a
PUSHSWAP = $(PUSHSWAP_DIR)/pushswap.a

INCLUDES = -I$(LIBFT_DIR) -I$(PUSHSWAP_DIR)

SRC_DIR = src
SRC_FILES = $(SRC_DIR)/push_swap.c $(SRC_DIR)/sort_stack.c $(SRC_DIR)/operations.c
OBJ_FILES = $(SRC_FILES:.c=.o)

all: libft pushswap push_swap

libft:
	$(MAKE) -C $(LIBFT_DIR)

pushswap:
	$(MAKE) -C $(PUSHSWAP_DIR)

push_swap: $(OBJ_FILES)
	$(CC) $(CFLAGS) $(OBJ_FILES) -o $@ $(PUSHSWAP) $(LIBFT)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(PUSHSWAP_DIR) clean
	rm -f $(SRC_DIR)/*.o

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(MAKE) -C $(PUSHSWAP_DIR) fclean
	rm -f push_swap

re: fclean all

.PHONY: all libft pushswap push_swap clean fclean re
