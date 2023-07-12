#include "main.h"
#include <stdlib.h>
/**
 * argstostr - func adv
 * @ac: arg_num
 * @av: arg_num
 * Return: num
 */
char *argstostr(int ac, char **av)
{
	int s, h, ri = 0, lol = 0;
	char *m;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (s = 0; s < ac; s++)
	{
		for (h = 0; av[s][h]; h++)
			lol++;
	}
	lol += ac;

	m = malloc(sizeof(char) * lol + 1);
	if (m == NULL)
		return (NULL);
	for (s = 0; s < ac; s++)
	{
	for (h = 0; av[s][h]; h++)
	{
		m[ri] = av[s][h];
		ri++;
	}
	if (m[ri] == '\0')
	{
		m[ri++] = '\n';
	}
	}
	return (m);
}
