#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a 2 dimesional array
 * Return: an int or null
 * @width: an int
 * @height: an int
 */

int **alloc_grid(int width, int height)

{

	int **new;

	int i;

	int j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	new = malloc(height * sizeof(int *));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		new[i] = malloc(width * sizeof(int));
		if (new[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(new[i]);
			}
			free(new);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			new[i][j] = 0;
		}
	}
	return (new);
}
