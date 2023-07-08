#include "main.h"
#include <stddef.h>

/**
 * _strchr - 1234
 * @s: vv
 * @c: vv
 * Return: num
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
