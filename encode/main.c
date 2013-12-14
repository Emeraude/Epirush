/*
** main.c for rush in /home/broggi_t/rush/encode
** 
** Made by broggi_t
** Login   <broggi_t@epitech.net>
** 
** Started on  Fri Dec 13 19:37:01 2013 broggi_t
** Last update Fri Dec 13 23:36:07 2013 broggi_t
*/

#include <stdlib.h>
#include "encode.h"
#include "get_next_line.h"
#include "my_str.h"

void		print_line(char *str)
{
  unsigned int	i;
  unsigned int	len;

  i = 0;
  len = my_strlen(str);
  while (i < len)
    {
      if (str[i] >= '0' && str[i] <= '9')
	my_putstr(atm[str[i] - '0']);
      else if (str[i] == '.')
	my_putstr(atm[10]);
      else if (LOW(str[i]) >= 'a' && LOW(str[i]) <= 'z')
	my_putstr(atm[LOW(str[i]) - 'a' + 11]);
      my_putchar((i + 1 != len) ? ('.') : ('\n'));
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
	    (str[i] >= '0' && str[i] <= '9') || str[i] == '.'))
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

  my_fulfil_tab();
  while ((stdin = get_next_line(0)) != NULL)
    {
      if (check_line(stdin) != 0)
	return (1);
      print_line(stdin);
      free(stdin);
    }
  return (0);
}
