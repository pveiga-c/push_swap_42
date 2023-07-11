NAME = push_swap

SRCS =  ./lib/ft_atoi.c \
				./lib/ft_isdigit.c \
				./lib/ft_putstr.c \
				./lib/ft_split.c \
				./lib/ft_putchar.c \
				./lib/ft_putnbr.c \
				./srcs/push_swap.c \
				./srcs/utils.c \
				./srcs/stacks.c \
				./error/ft_error.c \
				./moves/swap.c \
				./moves/push.c \
				./moves/rotate.c \
				./moves/reverse_rot.c \
				./moves/pos.c \
				./sort_alg/sort.c \
				./sort_alg/sort_2.c \
				./sort_alg/sort_3.c \
				./sort_alg/sort_4.c \
				./sort_alg/sort_5.c \
				                
OBJS :=$(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)
       
$(NAME): $(OBJS)
	@cc $(CFLAGS) $(OBJS) -g -fsanitize=address -o $(NAME) 

clean:
	@rm -f $(OBJS)
	@echo "OBJ deleted"

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean runner re
