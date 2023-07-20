#include "function_pointers.h"
/**
 * int_index - fic1
 * @array: vp1
 * @size: vp2
 * @cmp: vp3
 * Return: nummm
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int h;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (h = 0; h < size; h++)
	{
		if (cmp(array[h]))
			return (h);
	}
	return (-1);
}
