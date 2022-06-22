#include "main.h"
/**
 *  _strlen_recursion - length
 *   @s: pointer
 *    Return: rec
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 *  p - palindrome
 *   @s: pointer to string
 *    @i: position
 *     Return: bool
 */

int p(char *s, int i)

{
	if (i < 1)
	{
		return (1);
	}
	if (*s == *(s + i))
	{
		return (p(i + 1, i - 2));
	}
	return (0);
}

/**
 *  is_palindrome - palindrome
 *   @s:string
 *    Return: recursion
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (p(s, len - 1));


}
