/*
** encode.h for rush in /home/broggi_t/rush/encode
** 
** Made by broggi_t
** Login   <broggi_t@epitech.net>
** 
** Started on  Fri Dec 13 21:02:49 2013 broggi_t
** Last update Fri Dec 13 22:33:44 2013 broggi_t
*/

#ifndef ENCODE_H_
# define ENCODE_H_

# define LOW(x) ((x >= 'A' && x <= 'Z') ? (x + 32) : (x))

char		*atm[37];

void		my_fulfil_tab();

#endif /* !ENCODE_H_ */
