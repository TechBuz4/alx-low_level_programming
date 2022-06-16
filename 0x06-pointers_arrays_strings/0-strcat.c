#include <main.h>

/**
 * _strcat - concatenating strin*
 * @dest: a char
 * @src: a char
 * Return: char
 */

char *_strcat(char *dest, char *src)

{
	int i = 0;
	int j = 0;

if (dest[i] != '\0')

{

	while (src[j] != '\0')

	{

		dest[i] = src[j];

		j++;

		i++;
	}
}
	return (dest);

}
