/*
** my_strcmp.c for  in /home/broggi_t/rush
** 
** Made by broggi_t
** Login   <broggi_t@epitech.net>
** 
** Started on  Sat Dec 14 16:33:30 2013 broggi_t
** Last update Sat Dec 14 16:38:49 2013 broggi_t
*/

#include "my_str.h"

int		my_strcmp(char *s1, char *s2)
{
  unsigned int	i;

  i = 0;
  while (s1[i] && s2[i] &&s1[i] == s2[i])
    i++;
  if (!s1[i] && !s2[i])
    return (0);
  return (1);
}
