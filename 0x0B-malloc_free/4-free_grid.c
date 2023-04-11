#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees 2D grid created by alloc_grid
 * @grid: 2D grid
 * @height: height of grid
 *
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || 0)
	{
		return;
	}
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
