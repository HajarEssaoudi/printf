NAME		= libftprintf.a
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
SRCS		= ft_printf.c putprint.c putcheck.c put_adress.c
OBJS		= $(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:		clean
	rm -f $(NAME)

re:			fclean all

.PHONY: all clean fclean re