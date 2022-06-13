#include "main.h"

#include <stdio.h>

/**
 *  _strcpy - copies
 *  @dest: an int
 *  @src: an int
 *   Return: 0
 */



char *_strcpy(char *dest, char *src)

{

	int i = 0;

	while (i >= 0)
	{

		*(dest + i) = *(src + i);

		if (*(src + i) == '\0')

		{

		break;

		}

	}

	return (dest);


}
