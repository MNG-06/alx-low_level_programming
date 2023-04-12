#include "main.h"
#include <stdlib.h>

/**
 * free_grid - A function that frees a 2-D grid in alloc_grid
 * @grid: 2-D
 * @height: The grid's height
 * Description: Freeing the grid's memory
 *
 * Return: Nothing.
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
