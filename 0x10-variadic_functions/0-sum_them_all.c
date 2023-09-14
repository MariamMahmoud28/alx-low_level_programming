#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: pointer
 * @...: int
 * Return: anything
 */
int sum_them_all(const unsigned int n, ...)
{
	int m = 0, i = n;
	va_list ap;

	if (in)
		return (0);
	va_start(ap, n);
	while (i--)
		m += va_arg(ap, int);
	va_end(ap);
	return (m);
}
