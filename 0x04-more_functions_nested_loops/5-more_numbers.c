#include "main.h"

/**
 * more_numbers - print numbers 1 to 14 ten times
 */

void more_numbers(void)
{

	int c, i;

	while (i < 10)

	{

		for (c = 0; c < 15; c++)

		{

			_putchar(c + '0');

			_putchar('\n');

		}

		i++;

	}

	_putchar('\n');



}
