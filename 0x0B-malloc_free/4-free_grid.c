#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - func 5
 * @grid: arg_num
 * @height: arg_num
 * Return: vvv
 */
void free_grid(int **grid, int height)
{
	int ha;

	for (ha = 0; ha < height; ha++)
	{
		free(grid[ha]);
	}
	free(grid);
}
