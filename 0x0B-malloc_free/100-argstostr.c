#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - converts the passed parameters to the program to string
 * @ac: the arg count
 * @av: the arg vector
 * Return: char converted
 */
char *argstostr(int ac, char **av)
{
	int ch = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		while (av[i][j])
		{
			j++;
			ch++;
		}

		j = 0;
		i++;
	}
	s = malloc((sizeof(char) * ch) + ac + 1);

	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			s[k] = av[i][j];
			j++;
			k++;
		}
		s[k] = '\n';
		j = 0;
		i++;
		k++;
	}
	k++;
	s[k] = '\0';
	return (s);
}
