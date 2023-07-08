#include "main.h"
/**
 * _strncat - qweweqw
 * @dest: vv
 * @src: vv
 * @n: vv
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int s;
	int h;

	s = 0;
	while (dest[s] != '\0')
	{
		s++;
	}
	h = 0;
	while (h < n && src[h] != '\0')
	{
	dest[s] = src[h];
	s++;
	h++;
	}
	dest[s] = '\0';
	return (dest);
}
