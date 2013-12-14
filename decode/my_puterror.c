/*
** my_puterror.c for PUTERROR in /home/bouche_1/TESTS_INTERNE/rush/rush2/decode
** 
** Made by bouche_1
** Login   <bouche_1@epitech.net>
** 
** Started on  Sat Dec 14 01:17:45 2013 bouche_1
** Last update Sat Dec 14 01:18:06 2013 bouche_1
*/

#include "header.h"

void	my_puterror(char *my_laststr, int dontknow, int fd)
{
  my_puterr("Problem occurde at :");
  my_puterr(my_laststr);
  my_puterr("fd = ");
  my_putnberr(fd);
  my_puterr("\n Sorry for that, contact spouki\n");
  exit(EXIT_FAILURE);
}
