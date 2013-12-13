/*
** header.h for HEADER in /home/bouche_1/TESTS_INTERNE/rush/decode
** 
** Made by bouche_1
** Login   <bouche_1@epitech.net>
** 
** Started on  Fri Dec 13 19:21:55 2013 bouche_1
** Last update Fri Dec 13 21:11:51 2013 bouche_1
*/

#ifndef HEADER_H_
# define HEADER_H_

# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "../get_next_line.h"
# include "../my_str.h"

int	my_verif_and_count(char *str);
void	my_translator_numeric(char *str);
void	my_dispatcher(char *str, int line_length);

#endif /* !HEADER_H_ */
