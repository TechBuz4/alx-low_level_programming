#include "main.h"



/**
 * _puts - resets an int
 *@str: a pointer
 * Return: 0
 */

void _puts(char *str)

{

	int i = 0;

	while (str[i])
	{

		_putchar(str[i]);
		i++;
	}

	_putchar('\n');

}
