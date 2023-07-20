#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - fun1
 * @n: vp1
 * @...:
 *
 * Return: nummm
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list h;
	unsigned int s, sum = 0;

	va_start(h, n);

	for (s = 0; s < n; s++)
		sum += va_arg(h, int);

	va_end(h);

	return (sum);
}
