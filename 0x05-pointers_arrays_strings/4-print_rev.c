#include "main.h"



/**
 * _print_rev - reverse a string
 * @s: a string
 * Return: 0
 */



void print_rev(char *s);

{

	int i = 0;

	while (*(s + i) >= 0)

	{

		_putchar(s[i]);

		i--

	}

	_putchar('\n');





}
