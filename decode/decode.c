/*
** decode.c for DECODE in /home/bouche_1/TESTS_INTERNE/rush/rush2/decode
** 
** Made by bouche_1
** Login   <bouche_1@epitech.net>
** 
** Started on  Sat Dec 14 15:39:02 2013 bouche_1
** Last update Sat Dec 14 18:23:11 2013 broggi_t
*/

#include "my_str.h"
#include "table.h"
#include "decode.h"

void		my_compare(char *src)
{
  int		i;

  i = 0;
  while (my_strcmp(src, g_tab[i].str) != 0)
    i = i + 1;
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

int		check_char(char *str, int l_pos)
{
  int		jump;
  char		*src;
  int		end;

  jump = 0;
  end = 0;
  src = malloc(sizeof(char) * 12);
  if (src == NULL)
    exit(1);
  src[11] = '\0';
  while (jump <= 11 && end == 0)
    {
      if (check_silence(str, l_pos) == 1)
	{
	  src[jump] = '\0';
	  end = 1;
	}
      else
	src[jump] = str[l_pos];
      jump = jump + 1;
      l_pos = l_pos + 1;
    }
  if (end == 0)
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
      if (check_silence(str, i) == 1)
	i = i + 3;
      else
	check_char(str, i);
      i = i + 1;
    }
}
