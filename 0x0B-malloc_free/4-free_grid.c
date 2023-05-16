#include "main.h"
#include <stdlib.h>

/**
 * free_grid - ....
 * @grid: the combination of rowsand columns
 * @height: the vertical length
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
