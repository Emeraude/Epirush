/*
** my_str.c for rush in /home/broggi_t/rush
** 
** Made by broggi_t
** Login   <broggi_t@epitech.net>
** 
** Started on  Fri Dec 13 19:49:21 2013 broggi_t
** Last update Fri Dec 13 19:51:19 2013 broggi_t
*/

#include <unistd.h>

void		my_putchar(char c)
{
  write(1, &c, 1);
}

unsigned int	my_strlen(char *str)
{
  unsigned int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

void		my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}

void		my_puterr(char *str)
{
  write(2, str, my_strlen(str));
}
