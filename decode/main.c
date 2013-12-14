/*
** decode.c for rush in /home/broggi_t/rush/dec
** 
** Made by broggi_t
** Login   <broggi_t@epitech.net>
** 
** Started on  Sat Dec 14 11:54:16 2013 broggi_t
** Last update Sat Dec 14 16:59:49 2013 bouche_1
*/

#include <stdlib.h>
#include "get_next_line.h"
#include "my_str.h"
#include "decode.h"

int		check_line(char *str)
{
  unsigned int	i;

  i = 0;
  while (str[i])
    {
      if (!(str[i] == '.' || str[i] == '-' || str[i] == '_'))
	{
	  my_puterr("\033[31mAn incorrect character has been found : ");
	  my_putcharerr(str[i]);
	  my_puterr(".\n\033[0m");
	  return (1);
	}
      i++;
    }
  return (0);
}

int		main(void)
{
  char		*stdin;

  while ((stdin = get_next_line(0)) != NULL)
    {
      my_putstr(stdin);
      my_putchar('\n');
      if (check_line(stdin) != 0)
	return (1);
      decode(stdin);
      free(stdin);
    }
  return (0);
}
