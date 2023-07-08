#include "main.h"
/**
 * _strcat - cvbnm,
 * @dest: v
 * @src: v
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int s;
	int h;

	s = 0;
	while (dest[s] != '\0')
	{
		s++;
	}
	h = 0;
	while (src[h] != '\0')
	{
		dest[s] = src[h];
		s++;
		h++;
	}

	dest[s] = '\0';
	return (dest);
}
