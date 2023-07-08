#include "main.h"

/**
 * char *_strcpy - qwer
 * @dest: qwer
 * @src: qwe
 * Return: strg
 */
char *_strcpy(char *dest, char *src)
{
	int d = 0;
	int s = 0;

	while (*(src + d) != '\0')
	{
		d++;
	}
	for ( ; s < d ; s++)
	{
		dest[s] = src[s];
	}
	dest[d] = '\0';
	return (dest);
}
