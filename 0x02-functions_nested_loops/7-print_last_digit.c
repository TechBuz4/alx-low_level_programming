# include "main.h"
/**
 * print_last_digit - printing absolute value
 * Return: 1 or 0
 * @n: is char
 */
int print_last_digit(int n)
{
int j = n % 10;
if (n < 0)
{
	j = -j;
}
_putchar(j + '0');
return (j);


}
