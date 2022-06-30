#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array
 * Return: a pointer
 * @min: an int
 * @max: an int
 */

int *array_range(int min, int max)
{
	int *arr;

	int j;

	int k;

	if (min > max)
	{
		return (NULL);
	}
	k = max - min + 1;
	arr = malloc(k * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < k; j++)
	{
		arr[i] = min++;
	}
	return (arr);

}
