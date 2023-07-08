#include "main.h"
/**
 *_memcpy - sdfghjk
 *@dest: vv
 *@src: asdfg
 *@n: qwwe
 *Return: werty
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int sa = 0;
	int ha = n;

	for (; sa < ha; sa++)
	{
		dest[sa] = src[sa];
		n--;
	}
	return (dest);
}
