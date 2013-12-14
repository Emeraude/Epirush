/*
** my_strcpy.c for Piscine-C-Jour_06 in /home/bouche_1/rendu/Piscine-C-Jour_06/ex_01
** 
** Made by bouche_1
** Login   <bouche_1@epitech.net>
** 
** Started on  Mon Oct  7 16:17:33 2013 bouche_1
** Last update Sat Dec 14 16:09:54 2013 bouche_1
*/

#include "decode.h"

char	*my_strcpy(char *dest, char *src)
{
  int	counter;
  char	temp;

  temp = 'b';
  counter = 0;
  while (src[counter] != '\0')
    {
      temp = src[counter];
      dest[counter] = temp;
      counter = counter + 1;
    }
  return (dest);
}
