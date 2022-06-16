#include "main.h"

/**
 * rot13 - encodes a string
 * @s: input string.
 * Return: a char
 */

char *rot13(char *s)

{

	int j = 0, i;

	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";


	while (*(s + j) != '\0')

	{

		for (i = 0; i < 52; i++)

		{

			if (*(s + j) == alphabet[i])

			{

				*(s + j) = rot13[i];

				break;

			}

		}

		j++;

	}

	return (s);

}
