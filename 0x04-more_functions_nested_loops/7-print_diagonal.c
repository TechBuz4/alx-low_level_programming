#include "main.h"

/**
 * print_diagonal - print lines
 *@n: is an int
 */



void print_diagonal(int n)

{
	if (n <= 0)
	{

		_putchar('\n');

	}
	else
	{

		int x, y;

		for (x = 0; x < n; x++)

		{

			for (y = 0; y < n; y++)

			{

				if (x == y)

				{

					_putchar('\\');

				}

				else if (y < x)

				{

					_putchar(' ');

				}

				_putchar('\n');

			}
		}
	}
}
