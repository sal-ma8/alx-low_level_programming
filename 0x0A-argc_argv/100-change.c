#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - asdfg
 * @argc: qwerty
 * @argv: asdf
 * Return: numm
 */
int main(int argc, char *argv[])
{
	int nmm, h, ret;
	int cs[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	nmm = atoi(argv[1]);
	ret = 0;

	if (nmm < 0)
	{
		printf("0\n");
		return (0);
	}

	for (h = 0; h < 5 && nmm >= 0; h++)
	{
		while (nmm >= cs[h])
		{
			ret++;
			nmm -= cs[h];
		}
	}

	printf("%d\n", ret);
	return (0);
}
