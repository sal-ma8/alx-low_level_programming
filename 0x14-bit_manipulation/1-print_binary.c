#include "main.h"

/**
 * print_binary - func1
 * @n: vp1
 */
void print_binary(unsigned long int n)
{
	int h, hs = 0;
	unsigned long int hsa;

	for (h = 63; h >= 0; h--)
	{
		hsa = n >> h;

		if (hsa & 1)
		{
			_putchar('1');
			hs++;
		}
		else if (hs)
			_putchar('0');
	}
	if (!hs)
		_putchar('0');
}
