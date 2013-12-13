/*
** decode.c for DECODE in /home/bouche_1/TESTS_INTERNE/rush/decode
** 
** Made by bouche_1
** Login   <bouche_1@epitech.net>
** 
** Started on  Fri Dec 13 19:06:11 2013 bouche_1
** Last update Fri Dec 13 21:33:41 2013 bouche_1
*/

#include "header.h"
#include "../my_str.h"

void	my_translator_alpha(char *str)
{
  my_putstr(str);
}
void	my_dispatcher(char *str, int line_length)
{
  if (line_length > 4)
    my_translator_numeric(str);
  else
    my_translator_alpha(str);
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
