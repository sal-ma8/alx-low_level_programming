#include <stdio.h>
#include <stdlib.h>

/**
 * main -bfunc
 * @argc: vp1
 * @argv: vp2
 * Return: nummm
 */
int main(int argc, char *argv[])
{
	int byy, h;
	char *ar;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byy = atoi(argv[1]);

	if (byy < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ar = (char *)main;

	for (h = 0; h < byy; h++)
	{
		if (h == byy - 1)
		{
			printf("%02hhx\n", ar[h]);
			break;
		}
		printf("%02hhx ", ar[h]);
	}
	return (0);
}
