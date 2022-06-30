#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates a memory for an array
 * Return: a pointer
 * @nmemb: an unsigned int
 * @size: an unsigned int
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{

	char *i;

	void *j;

	unsigned int k;

	if  (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	i = malloc(size * nmemb);
	if (i == NULL)
	{
		return (NULL);
	}
	i = j;
	for (k = 0; k < (nmemb * size); k++)
	{
		i[k] = '\0';
	}
	return (j);
}
