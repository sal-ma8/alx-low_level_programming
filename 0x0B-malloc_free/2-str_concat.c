#include "main.h"
#include <stdlib.h>
/**
 * str_concat - fun3
 * @s1: arg_num
 * @s2: arg_num
 * Return: num
 */
char *str_concat(char *s1, char *s2)
{
	char *ha;
	int s, sa;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s = sa = 0;
	while (s1[s] != '\0')
		s++;
	while (s2[sa] != '\0')
		sa++;
	ha = malloc(sizeof(char) * (s + sa + 1));

	if (ha == NULL)
		return (NULL);
	s = sa = 0;
	while (s1[s] != '\0')
	{
		ha[s] = s1[s];
		s++;
	}

	while (s2[sa] != '\0')
	{
		ha[s] = s2[sa];
		s++, sa++;
	}
	ha[s] = '\0';
	return (ha);
}
