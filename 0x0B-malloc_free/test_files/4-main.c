#include <stdio.h>
#include <stdlib.h>

void free_grid(int **, int);

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (!grid)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
		/* memset(grid[i], 0, sizeof(int) * width); */
	}
	return (grid);
}

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	int **grid;
	int h;
	int w;

	h = 100;
	w = 200;
	grid = alloc_grid(w, h);
	if (grid == NULL)
	{
		return (1);
	}
	free_grid(grid, h);

	grid = alloc_grid(20, 10);
	if (grid == NULL)
		return (1);
	free_grid(grid, 10);

	grid = alloc_grid(200, 100);
	if (grid == NULL)
		return (1);
	free_grid(grid, 100);

	grid = alloc_grid(1, 1);
	if (grid == NULL)
		return (1);
	free_grid(grid, 1);

	free_grid(NULL, 0);
	printf("OK\n");

	return (0);
}
