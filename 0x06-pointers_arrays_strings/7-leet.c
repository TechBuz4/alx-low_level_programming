#include "main.h"

/**
 * leet - leet code
 * Return: a char*
 * @str: a char*
 */



char *leet(char *str)

{

	int i = 0;

	int j;

	char tmp[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[i])

	{

		for (j = 0; j <= 7; j++)

		{

			if (str[i] == tmp[j] ||
			str[i] - 32 == tmp[j])
			str[i] = j + '0';

		}

		i++;

	}

	return (str);

}
