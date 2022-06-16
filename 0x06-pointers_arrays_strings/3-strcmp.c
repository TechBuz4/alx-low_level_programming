#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: a string.
 * @s2: sa string.
 * Return: an int
 */

int _strcmp(char *s1, char *s2)

{

	while (s1[i] != '\0' && s2[j] != '\0' && s1 == s2)

	{

		s1++;

		s2++;

	}

	return (s1 - s2);

}
