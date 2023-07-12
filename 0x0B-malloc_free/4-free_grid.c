#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function frees 2d array
 * @grid: create 2d grid
 * @height: height dimension of grid
 * Description: a function to frees memory of grid
 * Return: null
 *
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
