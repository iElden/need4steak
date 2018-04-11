##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile of the project
##

NAME =	a.out

SRC =

OBJ =	$(SRC:.c=.o)

INC =	-Iinclude 		\

CFLAGS= $(INC)	\
	-W	\
	-Wall	\
	-Wextra	\

CC =	gcc

RULE =	all

all:    $(NAME)

$(NAME):$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

dbg:	CFLAGS += -O0 -g
dbg:	RULE = dbg
dbg:	re
