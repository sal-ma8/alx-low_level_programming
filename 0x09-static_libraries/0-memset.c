#include "main.h"
/**
 * _memset - func
 * @s: vv
 * @b: vv
 * @n: vv
 * Return: qqwee
 */
char *_memset(char *s, char b, unsigned int n)
{
	int h = 0;

	for (; n > 0; h++)
	{
		s[h] = b;
		n--;
	}
	return (s);
}
