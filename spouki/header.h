/*
** header.h for HEADER in /home/bouche_1/rendu/PSU_2013_my_ls
** 
** Made by bouche_1
** Login   <bouche_1@epitech.net>
** 
** Started on  Sat Nov 30 16:17:43 2013 bouche_1
** Last update Sun Dec  1 20:35:25 2013 bouche_1
*/

#ifndef HEADER_H_
# define HEADER_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <grp.h>
#include <pwd.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

typedef int (*fptr)(char*);
fptr ftab[5];

void	my_putchar(char c);
void	my_putstr(char *str);
char	my_strlen(char *str);
int	my_strcmp(char *src, char *cmp);
char	*my_strdup(char *src);
char	*my_strcpy(char *dest, char *src);
void	my_put_uns_nbr(unsigned int nb);
void	my_put_octal_nbr(int nb);
void	my_put_nbr(int nb);
void	my_put_hexa_nbr_min(int nb);
void	my_put_hexa_nbr_maj(int nb);
void	function_ptr(char c, va_list *ap);
void	my_printf(const char *format, ...);

#endif /* !HEADER_H_ */
