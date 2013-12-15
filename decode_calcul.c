/*
** decode.c for DECODE in /home/bouche_1/TESTS_INTERNE/rush/rush2/decode
** 
** Made by bouche_1
** Login   <bouche_1@epitech.net>
** 
** Started on  Sat Dec 14 15:39:02 2013 bouche_1
** Last update Sun Dec 15 15:35:21 2013 broggi_t
*/

#include <stdlib.h>
#include "my_str.h"
#include "table.h"
#include "decode.h"

void		my_compare(char *src)
{
  int		i;

  i = 0;
  while (my_strcmp(src, g_tab[i].str) && i < 36)
    i = i + 1;
  if (i == 36)
    {
      my_puterr("\033[31mAn incorrect character has been found.\n\033[0m");
      exit(1);
    }
  my_putchar(g_tab[i].c);
}

unsigned int	check_silence(char *str, int inline_pos)
{
  unsigned int	i;

  i = 0;
  while (str[inline_pos] == '.')
    {
      i = i + 1;
      inline_pos = inline_pos + 1;
    }
  if (i == 3)
    return (1);
  return (0);
}

int		check_char(char *str, unsigned int l_pos)
{
  int		jump;
  char		*src;

  jump = 0;
  if ((src = malloc(sizeof(char) * 12)) == NULL)
    exit(1);
  src[11] = '\0';
  while (jump <= 11)
    {
      if (check_silence(str, l_pos) == 1)
	{
	  src[jump] = '\0';
	  my_compare(src);
	  free(src);
	  return (jump);
	}
      else
	src[jump] = str[l_pos];
      jump = jump + 1;
      l_pos = l_pos + 1;
    }
  src[jump - 1] = '\0';
  my_compare(src);
  free(src);
  return (jump);
}

void		decode(char *str)
{
  unsigned int	i;

  i = 0;
  while (i < my_strlen(str))
    {
      if (str[i + 1] == '.' && check_silence(str, i) == 1)
	i = i + 3;
      else
	i = i + check_char(str, i);
    }
}
