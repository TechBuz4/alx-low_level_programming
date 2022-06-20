#include "main.h"

/**
 * _memset - fills a memmory with constant byte;
 * Return: a pointer
 * @b: a char
 * @n: an int
 * @s:a pointer
 */

char *_memset(char *s, char b, unsigned int n)

{

	unsigned int i;

	for (i = 0; i < n; i++)

	{

		*(s + i) = b;

		return (s);
	}
}
