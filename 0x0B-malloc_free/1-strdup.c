#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - fun2
 * @str: arg_cha
 * Return: num
 */
char *_strdup(char *str)
{
	char *sa;
	int h, ra = 0;

	if (str == NULL)
		return (NULL);
	h = 0;
	while (str[h] != '\0')
		h++;

	sa = malloc(sizeof(char) * (h + 1));

	if (sa == NULL)
		return (NULL);

	for (ra = 0; str[ra]; ra++)
		sa[ra] = str[ra];

	return (sa);
}
