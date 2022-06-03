#include <stdio.h>



/**
 * main - Entry point
 * Return: Always 0 (ok)
 */

int main(void)

{
int x;
char y;
for (x = 0; x <= 9; x++)
	putchar(x % 10 + '0');
for (y = 'a'; y < 'g'; y++)
	putchar(y);
putchar('\n');
return (0);
}
