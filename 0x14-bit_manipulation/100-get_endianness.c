#include "main.h"

/**
 * get_endianness - func
 * Return: int
 */
int get_endianness(void)
{
	unsigned int h = 1;
	char *c = (char *) &h;

	return (*c);
}
