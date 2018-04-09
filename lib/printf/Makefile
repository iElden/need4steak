##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

NAME =	libprintf.a

FILE =	my_printf.c		\
	my_putchar.c		\
	my_putnbr_base.c	\
	my_put_nbr_unsigned.c	\
	my_putstr.c		\
	my_showstr.c		\
	str.c			\
	my_putbase.c		\
	my_putfloat.c		\
	my_put_nbr.c		\
	my_putstar.c		\
	my_putstr_stderr.c	\
	my_strlen.c		\
	my_compute_power_long.c	\

SRC =	$(FILE:%.c=sources/%.o)

OBJ =	$(SRC:.c=.o)

INC =	-Iincludes

CFLAGS=	$(INC)

CC =	gcc

all: $(NAME)

$(NAME):$(OBJ)
	$(AR) rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

dbg:	CFLAGS += -O0 -g
dbg:	re
