#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates arguments
 * @ac: argument count
 *  @av: argument vector.
 *   Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{	char *new;
	int c, i, j, k;

	if (ac == 0)
	{
		return (NULL);
	}
	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
		{
			return (NULL);
		}
		for (j = 0; av[i][j] != '\0'; j++)
		{
			c++;
		}
		c++;
	}
	new = malloc((c + 1) * sizeof(char));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	for (i = j = k = 0; k < c; j++, k++)
	{
		if (av[i][j] == '\0')
		{
			new[k] = '\n';
			i++;
			k++;
			j = 0;
		}
		if (k < c - 1)
		{
			new[k] = av[i][j];
		}
	}
	new[k] = '\0';
	return (new);
}
