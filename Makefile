##
## Makefile for rush in /home/broggi_t/rush
## 
## Made by broggi_t
## Login   <broggi_t@epitech.net>
## 
## Started on  Sat Dec 14 02:31:56 2013 broggi_t
## Last update Sun Dec 15 14:18:10 2013 broggi_t
##

SRC_C	= get_next_line.c \
	  my_str.c \
	  my_strcmp.c

SRC_D	= decode_error.c \
	  decode_calcul.c

SRC_E	= encode.c

OBJ_C	= $(SRC_C:.c=.o)

OBJ_D	= $(SRC_D:.c=.o)

OBJ_E	= $(SRC_E:.c=.o)

NAME	= encodeur

NAME2	= décodeur

RM	= rm -f

all:	$(NAME) $(NAME2)

$(NAME):	$(OBJ_E) $(OBJ_C)
	cc -o $(NAME) $(OBJ_E) $(OBJ_C)

$(NAME2):	$(OBJ_D) $(OBJ_C)
	cc -o $(NAME2) $(OBJ_D) $(OBJ_C)

clean:
	$(RM) $(OBJ_C)
	$(RM) $(OBJ_D)
	$(RM) $(OBJ_E)

fclean:	clean
	$(RM) $(NAME)
	$(RM) $(NAME2)

re:	fclean all

.PHONY:	all clean fclean all
