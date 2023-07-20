#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - func1
 * @separator: vp1
 * @n: vp2
 * @...: vp3
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list h;
	unsigned int s;

	va_start(h, n);

	for (s = 0; s < n; s++)
	{
		printf("%d", va_arg(h, int));

		if (s != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(h);
}
