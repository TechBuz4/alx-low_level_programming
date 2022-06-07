#include "main.h"

/**
 * _abs - printing absolute value
 * Return: 1 or 0
 * @n: is char
 */



int _abs(int n)

{
if (n > 0)
{
	_putchar('+');
	return (n);
}
else if (n < 0)
{
	_putchar('-');

	return (-n);
}
else
{
	return (n);
}
}
