CFLAGS	= -Wall -Wextra -Werror
LIBC	= ar -rc
RM		= rm -f
NAME	= libftprintf.a
SRC		= ft_printf.c \
			ft_putchar.c \
			ft_putstr.c \
			ft_putnbr.c \
			ft_puthexa.c \
			ft_puthexama.c \
			ft_giveformat.c \
			ft_putnbru.c \
			ft_putadd.c \

OBJ	= $(SRC:.c=.o)

all: $(NAME)
	
$(NAME): $(OBJ)
	$(LIBC) $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re:	fclean all