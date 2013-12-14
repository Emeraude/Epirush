##
## Makefile for MAKE in /home/bouche_1/TESTS_INTERNE/rush/rush2/decode
## 
## Made by bouche_1
## Login   <bouche_1@epitech.net>
## 
## Started on  Sat Dec 14 16:02:32 2013 bouche_1
## Last update Sat Dec 14 17:00:36 2013 bouche_1
##

NAME=		décodeur

SRC=		main.c \
		decode.c \
		../my_str.c \
		../my_strcmp.c \
		my_strcpy.c \
		../get_next_line.c

OBJ=		$(SRC:.c=.o)

DEP=		decode.h

CFLAGS+=	-Wall -Wextra -Werror -ansi -pedantic
CFLAGS+=	-I ..

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) $(DEP) $(OBJ) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean:		clean

re:		fclean all

.PHONY:		all clean fclean re
