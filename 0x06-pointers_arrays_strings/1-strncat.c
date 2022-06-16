#include <main.h>

/**
 * _strncat - concatenating a string
 * @dest: a char
 * @src: a char
 * @n: an int
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)

{

	int i = 0;

	int j = 0;



	while (*(dest + i) != '\0')

	{

		i++;

	}

	while (j < n)

	{

		*(dest + i) = *(src + j);

		if (*(src + j) == '\0')
			break;

	}

	j++;

	i++;
	return (dest);

}



