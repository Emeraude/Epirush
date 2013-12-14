/*
** my_check_errors.c for CHECK_ERRORS in /home/bouche_1/TESTS_INTERNE/rush/rush2/decode
** 
** Made by bouche_1
** Login   <bouche_1@epitech.net>
** 
** Started on  Sat Dec 14 01:19:24 2013 bouche_1
** Last update Sat Dec 14 01:33:16 2013 bouche_1
*/

void	my_check_to_table(char *buffer, int buff_length)
{
  if ()


}

void	my_control_strict(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] != '-' && str[i] != '_' && str[i] != '\0' && str[i] != '.')
	my_puterror("LEVEL FOUR\nbad language^^\n", 0, 0);
      i = i + 1;
    }
  return (1);
}

char	*my_check_errors(char *buffer)
{
  int	buff_length;

  my_control_strict(buffer);
  if ((buff_length = (my_strlen(buffer))) == 0)
    my_puterror("LEVEL THREE\nchecking errors\n", 0, buff_length);
  else
    my_check_to_table(buffer, buff_length);
}
