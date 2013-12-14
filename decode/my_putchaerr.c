/*
** my_putchaerr.c for PUTCHAERR in /home/bouche_1/TESTS_INTERNE/rush/rush2/decode
** 
** Made by bouche_1
** Login   <bouche_1@epitech.net>
** 
** Started on  Sat Dec 14 01:15:36 2013 bouche_1
** Last update Sat Dec 14 01:16:01 2013 bouche_1
*/

void	my_putchaerr(char c)
{
  write(2, &c, 1);
}
