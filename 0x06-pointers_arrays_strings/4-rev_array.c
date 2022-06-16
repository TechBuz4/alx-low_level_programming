#include "main.h"

/**
 * reverse_array - compares two strings
 * @a: a string.
 * @n: an int.
 * Return: void
 */

void reverse_array(int *a, int n)

{

	int i;

	int j;
	 = 0;
	while (i < (n - 1))
	{

		j = a[i];
		a[i] = a[n];
		a[n] = j;

		n--;

	}

}
