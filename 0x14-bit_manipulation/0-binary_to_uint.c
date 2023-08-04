#include "main.h"

/**
 * binary_to_uint - func1
 * @b: vp1
 * Return:num
 */
unsigned int binary_to_uint(const char *b)
{
	int h;
	unsigned int hs = 0;

	if (!b)
		return (0);

	for (h = 0; b[h]; h++)
	{
		if (b[h] < '0' || b[h] > '1')
			return (0);
		hs = 2 * hs + (b[h] - '0');
	}

	return (hs);
}
