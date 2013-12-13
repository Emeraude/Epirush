/*
** main.c for rush in /home/broggi_t/rush/encode
** 
** Made by broggi_t
** Login   <broggi_t@epitech.net>
** 
** Started on  Fri Dec 13 19:37:01 2013 broggi_t
** Last update Fri Dec 13 20:13:29 2013 broggi_t
*/

#include <stdlib.h>
#include "get_next_line.h"

int		check_line(char *str)
{
  unsigned int	i;

  i = 0;
  while (str[i])
    {
      if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')
	  || (str[i] >= '1' && str[i] <= '9') || str[i] == '.')
	{
	  /* ON TRAITE LES DONNÉE (TABLEAU DE POINTEURS SUR FONCTION) */
	}
      else
	{
	  my_puterr("An incorrect character has been found.\n");
	  return (1);
	}
    }
}

int		main(void)
{
  char		*stdin;

  while ((stdin = get_next_line(1)) != NULL)
    {
      
      free(stdin);
    }
  return (0);
}
