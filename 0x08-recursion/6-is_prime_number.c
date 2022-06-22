#include "main.h"



/**
 * prime - checks to see if number is prime
 * @a: an int
 * @b: an int
 *  Return: 1 if prime
 */

int prime(int a, int b)

{

	if (b < 2 || b % a == 0)

		return (0);

	else if (a > b / 2)

		return (1);

	else

		return (prime(b + 1, a));

}



/**
 * is_prime_number - prime
 * @n: number to check
 *  Return: 1 if prime
 */

int is_prime_number(int n)

{

	if (n == 2)

		return (1);

	return (prime(2, n));

}
