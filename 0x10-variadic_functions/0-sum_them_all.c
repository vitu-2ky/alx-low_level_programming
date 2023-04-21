#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of its parameters
 * @n: number of parameters
 * Return: 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int y, sum = 0;

	va_start(ap, n);

	for (y = 0; y < n; y++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
