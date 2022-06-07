#include "main.h"
/**
 * times_table - prints the 9 times table
 * Description: prints the times table
 * Return: void
 */
void times_table(void)
{
	int r, c, p, t, o;

	for (r = 0; r <= 9; r++)
	{
		for (column = 0; column <= 9; column++)
		{
			p = r * c;
			t = p / 10;
			o = p % 10;
			if (column == 0)
			{
				_putchar('0');
			}
			else if (p < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(ones + '0');
					}
		}
		_putchar('\n');
			}

}
