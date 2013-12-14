/*
** decode.c for DECODE in /home/bouche_1/TESTS_INTERNE/rush/rush2/decode
** 
** Made by bouche_1
** Login   <bouche_1@epitech.net>
** 
** Started on  Sat Dec 14 15:39:02 2013 bouche_1
** Last update Sat Dec 14 17:52:24 2013 bouche_1
*/

#include "my_str.h"
#include "table.h"
#include "decode.h"

void	my_compare(char *src)
{
  int	i;

  i = 0;
  while (my_strcmp(src, g_tab[i].str) != 0)
    i = i + 1;
  my_putchar(g_tab[i].c);
}

int	check_silence(char *str, int inline_pos)
{
  int	i;

  i = 0;
  while (str[inline_pos] == '.')
    {
      i = i + 1;
      inline_pos = inline_pos + 1;
    }
  if (i == 3)
    my_putstr("SILENCE");
  return (i % 2);
}

int	check_char(char *str, int l_pos)
{
  int	jump;
  char	*src;
  int	end;

  jump = 0;
  end = 0;
  src = malloc(sizeof(char) * 12);
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
  return (jump);
}

void	decode(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '.')
	{
	  if (check_silence(str, i) == 1)
	    i = i + 2;
	  else
	    i = i + (check_char(str, i));
	}
      else
	i = i + (check_char(str, i));
      my_putchar('\n');
    }
}
