#include "main.h"

/**
 *  rev_string - reverse a string
 *   @s: a string
 *    Return: 0
 */

void rev_string(char *s)

{

	int a = 0;

	int b = 0;

	char c;

	while (s[a] != '\0')

	{

		a++;

	}

	a--;

	while (a > b)

	{

		c = s[b];

		s[b] = s[a];

		s[a] = c

			a--;

		b++;

	}

}
