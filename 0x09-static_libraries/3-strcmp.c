#include "main.h"
/**
 * _strcmp - qwertyuiop
 * @s1: vv
 * @s2: vv
 * Return: ary
 */
int _strcmp(char *s1, char *s2)
{
	int h;

	h = 0;
	while (s1[h] != '\0' && s2[h] != '\0')
	{
		if (s1[h] != s2[h])
		{
			return (s1[h] - s2[h]);
		}
	h++;
	}
	return (0);
}
