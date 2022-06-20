#include "main.h"

/**
 * _strspn - locates a string
 * Return: byte
 * @s: a string
 * @accept: a string
 */

unsigned int _strspn(char *s, char *accept)

{

	unsigned int i, k;

	for (j = 0; s[j]; j++)

	{

		for (k = 0; accept[k]; k++)

		{
			if (s[j] == accept[k])

			{
				break;
			}
		}

		if (!accept[k])
		{
			break;
		}
	}


	return (j);

}
