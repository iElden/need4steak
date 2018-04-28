##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile of the project
##

NAME =	ai

SRC =	ai.c		\
	exec_command.c	\
	main.c		\
	split.c		\
	get_next_line.c	\
	my_strlen.c	\

OBJ =	$(SRC:%.c=src/%.o)

INC =	-Iinclude 		\
	-Ilib/concatf/include	\

CFLAGS= $(INC)	\
	-W	\
	-Wall	\
	-Wextra	\

LDFLAGS= -lconcatf -Llib/concatf -lm

CC =	gcc

RULE =	all

all:    $(NAME)

$(NAME):$(OBJ)
	$(MAKE) -C lib/concatf $(RULE)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	$(MAKE) -C lib/concatf clean
	$(RM) $(OBJ)

fclean:	clean
	$(MAKE) -C lib/concatf fclean
	$(RM) $(NAME)

re:	fclean all

dbg:	CFLAGS += -O0 -g
dbg:	RULE = dbg
dbg:	re
