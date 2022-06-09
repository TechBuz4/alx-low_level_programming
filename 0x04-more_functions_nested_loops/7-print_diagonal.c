#include "main.h"

/**
 * print_diagonal - print lines
 *@n: is a digit
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

			if (x == y)

			{

				_putchar('\\');

			}

			else if (x < y)

			{

				_putchar(' ');

			}

			_putchar('\n');

		}

	}

}
