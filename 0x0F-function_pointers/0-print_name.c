#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - func2
 * @name:vp1
 * @f:vp2
 * Return: noooo
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
