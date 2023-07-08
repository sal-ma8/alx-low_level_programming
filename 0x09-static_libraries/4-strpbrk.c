#include "main.h"
/**
 * _strpbrk - qwertyu
 * @s: vv
 * @accept: vv
 * Return: num
 */
char *_strpbrk(char *s, char *accept)
{
	int h;

	while (*s)
	{
		for (h = 0; accept[h]; h++)
		{
		if (*s == accept[h])
		return (s);
		}
	s++;
	}

return ('\0');
}
