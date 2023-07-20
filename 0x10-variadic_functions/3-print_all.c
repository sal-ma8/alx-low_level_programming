#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - fun1
 * @format: vp1
 */
void print_all(const char * const format, ...)
{
	int h = 0;
	char *st, *se = "";

	va_list lit;

	va_start(lit, format);

	if (format)
	{
		while (format[h])
		{
			switch (format[h])
			{
				case 'c':
					printf("%s%c", se, va_arg(lit, int));
					break;
				case 'i':
					printf("%s%d", se, va_arg(lit, int));
					break;
				case 'f':
					printf("%s%f", se, va_arg(lit, double));
					break;
				case 's':
					st = va_arg(lit, char *);
					if (!st)
						st = "(nil)";
					printf("%s%s", se, st);
					break;
				default:
					h++;
					continue;
			}
			se = ", ";
			h++;
		}
	}

	printf("\n");
	va_end(lit);
}
