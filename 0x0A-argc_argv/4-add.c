#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 * @argc: argument count
 * @argv: argument vector
 */

int main(int argc, char *argv[])
{

	int i, j;

	int add = 0;

	for (i = 1; i < argc; i++)

	{
		for (j = 0; argv[i][j] != '\0'; j++)

		{
			if (!isdigit(argv[i][j]))

			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}

	printf("%d\n", add);
	return (0);
}
