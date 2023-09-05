#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by
 * your alloc_grid function
 * @grid: grid to free
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
