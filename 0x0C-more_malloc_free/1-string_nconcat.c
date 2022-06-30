#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate two strings
 * Return: a pointer
 * @n: an unsigned int
 * @s1: a string
 * @s2: a string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *i;

	unsigned int j;

	unsigned int l = n;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (i == NULL)
	{
		return (NULL);
	}
	for (j = 0; s1[j]; j++)
	{
		l++;
	}
	i = malloc((l + 1) * sizeof(char));
	l = 0;
	for (j = 0; s1[j]; j++)
	{
		i[l++] = s[j];
	}
	for (j = 0; s2[j] && j < n; j++)
	{
		i[l] = s2[j];
	}
	i[l] = '\0';
	return (i);
}
