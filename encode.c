/*
** main.c for rush in /home/broggi_t/rush/encode
** 
** Made by broggi_t
** Login   <broggi_t@epitech.net>
** 
** Started on  Fri Dec 13 19:37:01 2013 broggi_t
** Last update Sun Dec 15 15:37:31 2013 broggi_t
*/

#include <stdlib.h>
#include "encode.h"
#include "get_next_line.h"
#include "my_str.h"
#include "table.h"

void		print_line(char *str)
{
  unsigned int	i;
  unsigned int	len;
  unsigned int	j;

  i = 0;
  len = my_strlen(str);
  while (i < len)
    {
      j = 0;
      while (g_tab[j].c != LOW(str[i]))
	j++;
      my_putstr(g_tab[j].str);
      my_putstr((i + 1 != len) ? ("...") : ("\n"));
      i++;
    }
}

int		check_line(char *str)
{
  unsigned int	i;

  i = 0;
  while (str[i])
    {
      if (!((str[i] >= 'a' && str[i] <= 'z') ||
	    (str[i] >= 'A' && str[i] <= 'Z') ||
	    (str[i] >= '1' && str[i] <= '9') ||
	    str[i] == '.'))
	{
	  my_puterr("\033[31mAn incorrect character has been found.\n\033[0m");
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
      if (check_line(stdin) != 0)
	return (1);
      print_line(stdin);
      free(stdin);
    }
  return (0);
}
