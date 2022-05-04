#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees the space for 2D array
 * @grid: memory to be freed
 * @height: rows of the grid
 *
 * Return:Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
