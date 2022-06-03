#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (ok)
 */

int main(void)

{
char x;
for (x = 0; x <= 'a'; ++x)
{
	if (x != 'q' && x != 'e')
	{
		putchar(x);
	}
	putchar('\n');
}


	return (0);

}
