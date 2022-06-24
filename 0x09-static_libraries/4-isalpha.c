#include "main.h"

/**
 * _isalpha - returning 1 if letter, lowercase,uppercase
 * @c: a char
 * Return: 1 and 0
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
	return (1);
}
else if (c >= 'A' && c <= 'Z')
{
	return (1);
}
else
{
	return (0);
}
}
