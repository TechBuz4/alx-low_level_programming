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
	int i,  mul;

	if (agrc < 1 || argc > 2)

	{

		printf("Error\n");
		return (1);
	}

	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)

		{
			mul *= atoi(argv[i]);
			printf("%d\n", mul)
		}

	}
	return (0);
}
