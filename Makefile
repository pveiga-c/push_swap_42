NAME = push_swap

SRCS =  ./srcs/push_swap.c \
        		./srcs/operations.c \
				./srcs/srcs.c \
				./error/ft_error.c \
				./lib/ft_atoi.c \
				./lib/ft_isdigit.c \
				./lib/ft_putstr.c \
				./lib/ft_split.c \
				./lib/ft_putchar.c \
				./lib/ft_putnbr.c \
                
OBJS :=$(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)
       
$(NAME): $(OBJS)
	@cc $(CFLAGS) -fsanitize=address $(OBJS) -o $(NAME) 

clean:
	@rm -f $(OBJS)
	@echo "OBJ deleted"

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all tester clean fclean runner re
