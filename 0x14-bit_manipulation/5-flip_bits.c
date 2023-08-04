#include "main.h"

/**
 * flip_bits - func
 * @n:vp1
 * @m:vp2
 * Return: num
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int h, hs = 0;
	unsigned long int hsa;
	unsigned long int hsaz = n ^ m;

	for (h = 63; h >= 0; h--)
	{
		hsa = hsaz >> h;
		if (hsa & 1)
			hs++;
	}

	return (hs);
}
