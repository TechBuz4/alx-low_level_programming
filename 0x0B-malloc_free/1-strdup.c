#include "main.h"
#include <stdlib.h>
/**
 * _strdup - points to a new allocated space
 * Return: a pointer or null
 * @str: a string
 */

char *_strdup(char *str)

{
	int i, j;
	char *new;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		j++;
	}
	new = malloc(sizeof(char) * (j + 1));
	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		new[i] = str[i];
	}
	new[j] = '\0';
	return (new);
}
