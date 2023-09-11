#include <stdio.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the grid to print
 * @width: width of the grid
 * @height: height of the grid
 */
void print_grid(int **grid, int width, int height)
{
	int i, j;

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			printf("%d", grid[i][j]);
			if (j < width - 1)
				printf(", ");
		}
		printf("\n");
	}
}
