#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate a string
 * Return: a pointer or null
 * @s1: a string
 * @s2: a string
 */

char *str_concat(char *s1, char *s2)

{
	int i;
	int j = 0;
	int k = 0;
	char *new;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] || s2[i]; i++)
	{
		k++;
	}
	new = malloc(sizeof(char) * k);
	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		new[j++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		new[j++] = s2[i];
	}
	return (new);
}
