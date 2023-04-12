#include "main.h"
/**
 *free_grid - free previously allocated mem'
 *@grid: pointer to a 2D array
 *@heigt: the number of rows
 *
 *Return: Nutting
 */
void free_grid(int **grid, int height)
{
	int q;

	while (q < height)
	{
		free(grid[q]);
		i++;
	}
	free(grid)
}
