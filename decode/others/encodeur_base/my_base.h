/*
** my_base.h for MY_BASE in /home/bouche_1/TESTS_INTERNE/rush/rush2/decode
** 
** Made by bouche_1
** Login   <bouche_1@epitech.net>
** 
** Started on  Sat Dec 14 00:23:37 2013 bouche_1
** Last update Sat Dec 14 00:55:23 2013 bouche_1
*/

#include "header.h"

char	*x_malloc(int buffsize)
{
  char	*dest;

  dest = malloc(sizeof*(buffsize)*(char));
  if (dest == NULL)
    {
      my_puterr("-- X_MALLOC FAILED AT WORK --\n");
      my_puterr("-- terminating, have a nice day --\n");
      return (NULL);
    }
  else
    return (dest);
  return (NULL);
}

char	my_cmp_chars(char src)
{
  


  return (NULL);
}

char	*my_opening(int my_stdin, char *my_buff)
{
  int	fd;

  if ((fd = open(my_stdin, my_buff, BUFF_SIZE)) != NULL)
    {
      my_buff = x_malloc(BUFF_SIZE);
      while ((read(fd, &my_buff, BUFF_SIZE)) != NULL)
	{
	  my_cmp_chars(my_buff);

	}

    }

  return (my_buff);
}

int	main()
{
  char	*my_buff;

  my_buff = my_opening(0, my_buff);
  
  return (0);
}
