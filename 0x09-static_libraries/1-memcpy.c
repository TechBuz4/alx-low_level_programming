#include "main.h"

/**
 * _memcpy - copies a memory area
 * Return: a pointer
 * @dest: a char
 * @n: an int
 * @src: a char
 */



char *_memcpy(char *dest, char *src, unsigned int n)

{

	unsigned int i;

	for (i = 0; i < n; i++)

	{

		*(dest + i) = *(src + i);
	}
	return (dest);
}
