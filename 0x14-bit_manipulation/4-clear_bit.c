#include "main.h"

/**
 * clear_bit - func1
 * @n: vp1
 * @index: vp2
 * Return: num
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
