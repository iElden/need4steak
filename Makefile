##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile of the project
##

NAME =	

SRC =

OBJ =	$(SRC:.c=.o)

INC =	-Iinclude \
	-Ilib/printf/includes

LIB =	./lib/printf/libprintf.a

LDFLAGS = -Llib/printf\
	  -lprintf

CFLAGS= $(INC) \
	-W \
	-Wall \
	-Wextra \
	-Werror

CC =	gcc

RULE =	all

all:    $(NAME)

$(LIB):
	$(MAKE) -C lib/printf $(RULE)

$(NAME):$(OBJ) $(LIB)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	$(MAKE) -C lib/printf clean
	$(RM) $(OBJ)

fclean:	clean
	$(MAKE) -C lib/printf fclean
	$(RM) $(NAME)

re:	fclean all

dbg:	CFLAGS += -O0 -g
dbg:	RULE = dbg
dbg:	re
