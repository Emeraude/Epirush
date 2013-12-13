/*
** main.c for MAIN in /home/bouche_1/rendu/PSU_2013_my_ls
** 
** Made by bouche_1
** Login   <bouche_1@epitech.net>
** 
** Started on  Sat Nov 30 16:06:20 2013 bouche_1
** Last update Sun Dec  1 20:39:22 2013 bouche_1
*/

#include "header.h"

void		displayvan(DIR *dirp)
{
  struct dirent	*entry;

  while (((entry = readdir(dirp)) != NULL))
    {
      if (my_strcmp(entry->d_name, ".") == -1 && my_strcmp(entry->d_name, "..") == -1)
	my_printf("%s ", entry->d_name);
    }
  my_putchar('\n');
  closedir(dirp);
}

int		vanilla(char *porf)
{
  DIR		*dirp;
  struct dirent	*entry;

  if ((dirp = opendir(porf)) == NULL)
    {
      closedir(dirp);
      if ((dirp = opendir(".")) == NULL)
	closedir(dirp);
      while (((entry = readdir(dirp)) != NULL))
	{
	  if (my_strcmp(entry->d_name, porf) == 0)
	    {
	      my_printf("%s\n", porf);
	      closedir(dirp);
	      return (0);
	    }
	}
      if (entry == NULL)
	my_printf("my_ls: cannot access %s: No such file or directory\n", porf);
      closedir(dirp);
      return (0);
    }
  else
    displayvan(dirp);
  return (0);
}

void		displaying(struct dirent *entry)
{
  struct stat	st;
  struct group	*grp;

  grp = getgrgid(st.st_gid);
  if (grp == NULL)
    my_printf("FUCK");
  if (my_strcmp(entry->d_name, ".") == -1 && my_strcmp(entry->d_name, "..") == -1)
    my_printf("%s %s\n", grp->gr_name, entry->d_name);
}

int		long_list(char *str)
{
  DIR		*dirp;
  struct dirent	*entry;

  if ((dirp = opendir(str)) == NULL)
    {
      closedir(dirp);
      vanilla(str);
      return (0);
    }
  while (((entry = readdir(dirp)) != NULL))
    displaying(entry);
  closedir(dirp);
  return (0);
}

int		main(int argc, char **argv)
{
  int		arcount;

  ftab[0] = &long_list;
  arcount = 1;
  if (argc == 1)
    vanilla(".");
  else if (argv[1][0] != '-')
    vanilla(argv[1]);
  else
    {
      while (arcount <= argc - 1)
	{
	  if (argv[1][1] == 'l' && argv[1][2] == '\0')
	    {
	      if (argv[arcount + 1] == '\0')
		(*(ftab[0]))(".");
	      else
		(*(ftab[0]))(argv[arcount + 1]);
	    }
	  else
	    my_printf("my_ls: invalid option -- '%c'\n", argv[1][1]);
	  arcount = arcount + 1;
	}
    }
  return (0);
}
