#include "main.h"

/**
 * _strchr - locates a string
 * Return: a pointer
 * @s: a string
 * @c: a char
 */



char *_strchr(char *s, char c)

{

	int i = 0;

	while (*(s + i))

	{

		if (*(s + i) == c)
		{


			return (s + i);
		}
		i++;

	}

	if (*(s + i) == c)

		return (s + i);

	return (0);

}
