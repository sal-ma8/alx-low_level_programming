#include "main.h"

/**
 * get_bit - func1
 * @n: vp1
 * @index:vp2
 * Return:num
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int hs;

	if (index > 63)
		return (-1);

	hs = (n >> index) & 1;

	return (hs);
}
