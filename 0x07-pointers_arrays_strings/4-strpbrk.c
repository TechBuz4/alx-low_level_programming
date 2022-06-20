#include "main.h"
/**
 * _strpbrk - searches a string
 * Return: a pointer
 * @s: a string
 * @accept: a string
 */

char *_strpbrk(char *s, char *accept)

{

	int i = 0;

	int j = 0;



	while (s[i])

	{

		for (j = 0; (accept + j); j++)

		{

			if (s[i] == accept[j])

			{

				break;

			}

		}

		if (accept[j])

		{

			return (s + i);

		}

		i++;

	}

	return (0);

}
