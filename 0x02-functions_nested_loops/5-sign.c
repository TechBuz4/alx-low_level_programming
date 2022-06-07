#include "main.h"

/**
 * print_sign - print positive or negative or zero
 * Return: 1 or 0
 * @n: is a char
 */

int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n < 0)
{
	_putchar('-');
	return (-1);
}
else
{
	_putchar('0');
	return (0);
}
}
