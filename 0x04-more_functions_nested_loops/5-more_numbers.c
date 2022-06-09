#include "main.h"



/**
 * more_numbers - printing numbers from 1 to 14
 */
void more_numbers(void)

{

	int i, j;



	for (j = o; j < 10; j++)

	{

		for (i = 0; i < 15; i++)

		{

			if (i >= 10)

			{

				_putchar((i / 10) + '0');

			}

			_putchar((i % 10) + '0');

		}

		_putchar('\n');

	}

}
