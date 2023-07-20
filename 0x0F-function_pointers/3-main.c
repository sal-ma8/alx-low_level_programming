#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - strac
 * @argc: vp1
 * @argv: vp2
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int nm1, nm2;
	char *ooop;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	nm1 = atoi(argv[1]);
	ooop = argv[2];
	nm2 = atoi(argv[3]);

	if (get_op_func(ooop) == NULL || ooop[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*ooop == '/' && nm2 == 0) ||
	    (*ooop == '%' && nm2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(ooop)(nm1, nm2));

	return (0);
}
