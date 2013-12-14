##
## Makefile for rush in /home/broggi_t/rush/encode
## 
## Made by broggi_t
## Login   <broggi_t@epitech.net>
## 
## Started on  Fri Dec 13 19:34:20 2013 broggi_t
## Last update Sat Dec 14 01:54:16 2013 broggi_t
##

SRCS	= main.c \
	  ../get_next_line.c \
	  ../my_str.c

OBJS	= $(SRCS:.c=.o)

NAME	= encodeur

CFLAGS	+= -W -Wall -Wextra -pedantic -ansi
CFLAGS	+= -I ..

RM	= rm -f

all:	$(NAME)

$(NAME):	$(OBJS)
	cc -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
