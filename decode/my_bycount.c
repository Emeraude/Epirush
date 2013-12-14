/*
** my_bycount.c for BY_COUNT in /home/bouche_1/TESTS_INTERNE/rush/rush2/decode
** 
** Made by bouche_1
** Login   <bouche_1@epitech.net>
** 
** Started on  Sat Dec 14 00:58:18 2013 bouche_1
** Last update Sat Dec 14 01:35:12 2013 bouche_1
*/

#include "header.h"

int	my_open(int fd)
{
  if ((fd = open(fd, O_RDONLY) == 0))
    return (fd);
  else
    my_puterror("LEVEL TWO\nopening File Descr.\n", 0, fd);
  return (NULL);
}

int	main()
{
  int	fd;
  char	*my_buff[BUFF_SIZE + 1];

  my_buff[BUFF_SIZE + 1] = '\0';
  if ((fd = my_open(fd) == 0));
  {
    if ((my_buff = my_read(fd, my_buff, BUFF_SIZE) == NULL))
      my_puterror("LEVEL ONE\nbuffering my_buff\n", 0, fd);
    else
      my_check_errors(my_buff);
    
  }
  return (0);
}

/* A FINIR */
/* w/ check_errors */
/* w/ puterror */
/* etc ... */
