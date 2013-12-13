##
## Makefile for MAKE in /home/bouche_1/TESTS_INTERNE/rush/decode
## 
## Made by bouche_1
## Login   <bouche_1@epitech.net>
## 
## Started on  Fri Dec 13 19:14:45 2013 bouche_1
## Last update Fri Dec 13 21:02:01 2013 bouche_1
##

NAME=		décodeur

DEP=		header.h

SRC=		decode.c \
		../get_next_line.c \
		../my_str.c

CFLAGS+=	-W -Wall -pedantic -ansi

OBJ=		$(SRC:.c=.o)

CC=		cc

RM=		rm -f

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) $(DEP) $(OBJ) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

.PHONY:		all clean fclean re
