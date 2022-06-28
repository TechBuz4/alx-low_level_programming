#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array
 * Return: a pointer or null
 * @size: unsigned int
 * @c: a char
 */

char *create_array(unsigned int size, char c)

{
	char *i;
	unsigned int j;

	if (size == 0)
	{
		return (NULL);
	}
	i = malloc(size * sizeof(c));
	if (i == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		i[j] = c;
	}
	return (i);
}
