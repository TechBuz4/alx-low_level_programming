#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: 0
 * @argc: argument count
 * @argv: argument vector
 */

int main(int argc, char *argv[])

{
	int i, j, mul;

	if (agrc != 3)

	{

		puts("Error");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mul = i * j;
	printf("%d\n", mul)

	return (0);
}
