/*
** my_putnberr.c for PUTNBERR in /home/bouche_1/TESTS_INTERNE/rush/rush2/decode
** 
** Made by bouche_1
** Login   <bouche_1@epitech.net>
** 
** Started on  Sat Dec 14 01:12:43 2013 bouche_1
** Last update Sat Dec 14 01:15:22 2013 bouche_1
*/

void	my_putnberr(int nb)
{
  if (nb >= 0)
    {
      my_putnberr(nb / 10);
      my_putchaerr((nb % 10) + '0');
    }
  else if (nb <= 0)
    {
      nb = nb * -1;
      my_putchaerr('-');
      my_putnberr(nb / 10);
      my_putchaerr((nb % 10) + '0');
    }
}
