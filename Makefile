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
	-Ilib/printf/includes	\
	-Ilib/gnl/includes	\

LIBPF =	./lib/printf/libprintf.a

LIBGNL= ./lib/gnl/libgnl.a

LDFLAGS = -Llib/printf	\
	  -lprintf	\
	  -Llib/gnl	\
	  -lgnl

CFLAGS= $(INC)	\
	-W	\
	-Wall	\
	-Wextra	\

CC =	gcc

RULE =	all

all:    $(NAME)

$(LIBGNL):
	$(MAKE) -C lib/gnl $(RULE)

$(LIBPF):
	$(MAKE) -C lib/printf $(RULE)

$(NAME):$(OBJ) $(LIBPF) $(LIBGNL)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	$(MAKE) -C lib/gnl clean
	$(MAKE) -C lib/printf clean
	$(RM) $(OBJ)

fclean:	clean
	$(MAKE) -C lib/gnl fclean
	$(MAKE) -C lib/printf fclean
	$(RM) $(NAME)

re:	fclean all

dbg:	CFLAGS += -O0 -g
dbg:	RULE = dbg
dbg:	re
