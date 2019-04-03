NAME = libmath.a

SRCS = *.c
INCLUDES = includes
FLAGS = -Wall -Wextra -Werror
CC = gcc
OBJC = $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJC)
	ar rcs $(NAME) $(OBJC)
	ranlib $(NAME)

$(OBJC): $(SRCS)
	$(CC) $(FLAGS) -c $(SRCS)

clean:
	rm -f $(OBJC)

fclean:
	rm -f $(NAME)
	rm -f $(OBJC)

re: fclean all