#include "main.h"

/**
 * string_toupper - converts lower to upper
 * Return: char
 * @str:char
 */

char *string_toupper(char *str)

{

	int i = 0;

	while (str[i])

	{

		if (str[i] >= '97 && str[i] <=122)

		{

			str[i] = str[i] - 32;

		}

		i++;

	}
	return (str);



}


