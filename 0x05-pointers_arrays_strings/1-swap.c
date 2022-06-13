#include "main.h"



/**
 * swap_int - resets an int
 * @a: an int
 * @b: an int
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;

	*b = i;

	}
