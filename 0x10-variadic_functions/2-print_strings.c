#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - func1
 * @separator: vp1
 * @n: vp2
 * @...: vp3
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strin;
	char *str;
	unsigned int s;

	va_start(strin, n);

	for (s = 0; s < n; s++)
	{
		str = va_arg(strin, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (s != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strin);
}
