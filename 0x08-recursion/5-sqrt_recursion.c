#include "main.h"



/**
 * second - checks for the square root of c
 * @a:guess at sqrt
 * @b: number to find sqrt of
 * Return: -1
 */

int second(int a, int b)

{

	if (a * a == b)

		return (a);

	if (a * a > b)

		return (-1);

	return (second(a + 1, b));

}



/**
 * _sqrt_recursion - square root
 * @n: an int
 * Return: an int
 */

int _sqrt_recursion(int n)

{

	if (n == 0)

		return (0);

	return (second(1, n));

}
