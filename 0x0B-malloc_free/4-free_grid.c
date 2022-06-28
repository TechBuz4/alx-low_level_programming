#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimesional array
 * Return: an int or null
 * @grid: array
 * @height: an int
 */

void free_grid(int **grid, int height)

{
	if (grid != null && height != 0)
	{
		for (; height >= 0; height--)
		{
			free(grid[height]);
		}
		free(grid);
	}
}
