/*
** get_next_line.c for get_next_line in /home/broggi_t/get_next_line
** 
** Made by broggi_t
** Login   <broggi_t@epitech.net>
** 
** Started on  Sat Nov 23 12:02:02 2013 broggi_t
** Last update Thu Dec  5 21:21:39 2013 broggi_t
*/

#include <unistd.h>
#include <stdlib.h>
#include "get_next_line.h"

char		*my_ralloc_cat(char *str, char *str2)
{
  unsigned int	i;
  unsigned int	j;
  char		*ralloc;

  i = 0;
  while (str[i])
    i = i + 1;
  j = 0;
  while (str2[j])
    j = j + 1;
  ralloc = malloc((i + j + 1) * sizeof(char));
  if (ralloc == NULL)
    return (NULL);
  i = 0;
  while (str[i])
    {
      ralloc[i] = str[i];
      i = i + 1;
    }
  j = 0;
  while (str2[j])
    ralloc[i++] = str2[j++];
  ralloc[i] = 0;
  free(str);
  return (ralloc);
}

int		my_search(char *str, char src)
{
  unsigned int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] == src)
	return (i);
      i = i + 1;
    }
  return (-1);
}

char		*my_first_line(char *buffer)
{
  unsigned int	i;
  unsigned int	j;
  char		*first_line;

  i = 0;
  while (buffer[i] != '\n' && buffer[i])
    i = i + 1;
  first_line = malloc((i + 1) * sizeof(char));
  if (first_line == NULL)
    return (NULL);
  i = 0;
  while (buffer[i] != '\n' && buffer[i])
    {
      first_line[i] = buffer[i];
      i = i + 1;
    }
  first_line[i++] = 0;
  j = 0;
  while (buffer[i - 1])
    buffer[j++] = buffer[i++];
  while (buffer[j++])
    buffer[j] = 0;
  return (first_line);
}

char		*get_next_line(const int fd)
{
  char		*lecture;
  static char	*buffer = NULL;
  int		size_read;

  if (buffer == NULL)
    buffer = malloc(0);
  if (buffer == NULL)
    return (NULL);
  size_read = BUF_SIZE;
  while (size_read == BUF_SIZE)
    {
      lecture = malloc((BUF_SIZE + 1) * sizeof(char));
      if (lecture == NULL)
	return (NULL);
      if ((size_read = read(fd, lecture, BUF_SIZE)) == -1)
	return (NULL);
      lecture[size_read] = 0;
      buffer = my_ralloc_cat(buffer, lecture);
      if (buffer == NULL)
	return (NULL);
      free(lecture);
      if (my_search(buffer, '\n') != -1 || my_search(buffer, '\0') != -1)
	return (my_first_line(buffer));
    }
  return (NULL);
}
