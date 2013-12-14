/*
** decode.c for DECODE in /home/bouche_1/TESTS_INTERNE/rush/decode
** 
** Made by bouche_1
** Login   <bouche_1@epitech.net>
** 
** Started on  Fri Dec 13 19:06:11 2013 bouche_1
** Last update Fri Dec 13 22:11:29 2013 bouche_1
*/

#include "header.h"
#include "../my_str.h"

void	my_four_length(char *str)
{
  int	i;
  int	t;
  int	u;

  t = 0;
  i = 0;
  u = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '_' && u == 0)
	u = i + 1;
      else if (str[i] == '-' && t == 0)
	t = i + 1;
      i = i + 1;
    }
}

void	my_lite_char(char *str)
{
  if (str[0] == '_')
    my_putchar('N');
  else if (str[1] == '-')
    my_putchar('I');
  else
    my_putchar('A');
}

void	my_littlest_char(char *str)
{
  if (str[0] == '-')
    my_putchar('E');
  else
    my_putchar('T');
}

void	my_translator_alpha(char *str, int line_length)
{
  if (str[0] == '.')
    my_putstr("SILENCE I'LL KILL YOU!\n");
  else
    {
      if (line_length == '1' && str[0] != '.')
	my_littlest_char(str);
      else if (line_length == '2')
	my_lite_char(str);
      else if (line_length == '3')
	my_four_length(str);
      else if (line_length == '4')
	my_maybe_little_liter_char(str);
    }
}
void	my_dispatcher(char *str, int line_length)
{
  if (line_length > 4)
    my_translator_numeric(str);
  else
    my_translator_alpha(str, line_length);
}

void	my_less(char *str)
{
  int	i;

  i = 0;
  while (str[i] == '-')
    {
      i = i + 1;
    }
  my_putchar(i + '0');
}

void	my_more(char *str)
{
  int	i;

  i = 0;
  while (str[i] == '_')
    {
      i = i + 1;
    }
  my_putchar((i + 5) + '0');
}

void	my_translator_numeric(char *str)
{
  if (str[0] == '-')
    my_less(str);
  else if (str[0] == '_' && str[4] == '-')
    my_more(str);
  else if (str[0] == '_' && str[4] == '_')
    my_putchar('0');
}

int	my_verif_and_count(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] != '-' && str[i] != '_' && str[i] != '.' && str[i] != '\0')
	{
	  my_puterr("TROLOL T TRO NUL\n");
	  exit(EXIT_FAILURE);
	}
      i = i + 1;
    }
  my_putstr("-- It passed ! WELL DONE ! --\n");
  return (i);
}

int	main(void)
{
  char	*str;
  int	line_length;

  line_length = 0;
  while ((str = get_next_line(0)) != NULL)
    {
      line_length = my_verif_and_count(str);
      my_dispatcher(str, line_length);
      free(str);
      my_putchar('\n');
    }
  return (0);
}
