#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program.
 *
 *
 * @ac: ARGC
 * @av: ARGV
 *
 * Return: Pointer
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j, longitude = 0, l, k;
	char *string;

	if (ac == 0 || av == '\0')
	return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			j++;
		}
		longitude  +=  j + 1;
	}
	string = malloc(sizeof(char) * (longitude + 1));

	if (string == NULL)
	{
		return (NULL);
	}
	longitude = 0;
	for (k = 0; k < ac; k++)
	{
		for (l = 0; av[k][l] != '\0'; l++)
		{
			*(string + longitude) = av[k][l];
			longitude++;
		}
		*(string + longitude) = '\n';
		longitude++;
	}

	return (string);
}
