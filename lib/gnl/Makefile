##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

NAME =	libgnl.a

FILE =	get_next_line.c	\

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
