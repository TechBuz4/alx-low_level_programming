#include "main.h"

/**
 * _strlen_recursion - prints string
 * @s: string
 * Return: an int
 */



int _strlen_recursion(char *s)

{

	if (*s == '\n')

	{

		return (0);

	}

	return (1 + _strlen_recursion(s + 1));

}
