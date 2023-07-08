#include "main.h"
/**
 * _strspn - ewew
 * @s: we
 * @accept: wer
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int h = 0;
	int sa;

	while (*s)
	{
		for (sa = 0; accept[sa]; sa++)
		{
			if (*s == accept[sa])
			{
				h++;
				break;
			}
			else if (accept[sa + 1] == '\0')
				return (h);
		}
		s++;
	}
	return (h);
}
