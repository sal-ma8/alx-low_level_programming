#include "main.h"
/**
 * _strlen_recursion - function 2
 * @s: The string to be measured.
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	int H = 0;

	if (*s)
	{
		H++;
		H += _strlen_recursion(s + 1);
	}

	return (H);
}
