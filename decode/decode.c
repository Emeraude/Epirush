/*
** decode.c for DECODE in /home/bouche_1/TESTS_INTERNE/rush/rush2/decode
** 
** Made by bouche_1
** Login   <bouche_1@epitech.net>
** 
** Started on  Sat Dec 14 15:39:02 2013 bouche_1
** Last update Sat Dec 14 16:34:55 2013 bouche_1
*/

#include "../my_str.h"
#include "decode.h"

int	check_silence(char *str, int inline_pos)
{
  int	i;

  i = 0;
  while (str[inline_pos] == '.')
    {
      i = i + 1;
      inline_pos = inline_pos + 1;
    }
  return (i % 2);
}

int	check_char(char *str, int l_pos)
{
  int	jump;
  char	*dest;
  char	*src;

  jump = 0;
  src = malloc(sizeof(char) * 11);
  while (jump <= 11)
    {
      src[jump] = str[l_pos];
      if (str[l_pos] == '.' && str[l_pos + 1] == '.' && str[l_pos + 2] == '.')
	{
	  dest = malloc(sizeof(char) * (jump - 1));
	  my_strcpy(dest, src);
	}
      else
	{
	  dest = malloc(sizeof(char) * jump);
	  my_strcpy(dest, src);
	}
      jump = jump + 1;
      l_pos = l_pos + 1;
    }
  my_putstr(dest);
  return (jump);
}

void	decode(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '.')
	if ((check_silence(str, i)) == 1)
	  i = i + 2;
	else
	  i = i - 1;
      else
	i = i + (check_char(str, i));
      
    }
  my_putchar('\n');
}

int	main()
{
  decode("-.-.-.-...-...-._.-.-...-._.-.-..._._._");
  return (0);
}
