#include "main.h"

#include <stdio.h>

/**
 *  print_array - prints an array
 *   @n: an int
 *   @a: an int
 *    Return: 0
 */



void print_array(int *a, int n)

{

	int i;

	for (;  i <= n; i++)

	{



		printf("%d", *(a + i));

	}

	if (i != (n - 1))

	{

		printf(", ");

	}

}


