#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - fun 4
 * @width: arg_num
 * @height: arg_num
 * Return: num
 */
int **alloc_grid(int width, int height)
{
	int **sa;
	int h, m;

	if (width <= 0 || height <= 0)
		return (NULL);

	sa = malloc(sizeof(int *) * height);

	if (sa == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		sa[h] = malloc(sizeof(int) * width);

		if (sa[h] == NULL)
		{
			for (; h >= 0; h--)
				free(sa[h]);

			free(sa);
			return (NULL);
		}
	}

	for (h = 0; h < height; h++)
	{
		for (m = 0; m < width; m++)
			sa[h][m] = 0;
	}

	return (sa);
}
