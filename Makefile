NAME = push_swap

SRCS =  ./srcs/push_swap.c \
        		./srcs/operations.c \
				./srcs/srcs.c \
                
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
