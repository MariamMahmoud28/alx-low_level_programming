#include "variadic_functions.h"

/**
 * print_numbers - function
 * @separator: pointer
 * @n: pointer
 * @...: int
 * Return: value
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int f = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (f--)
		printf("%d%s", va_arg(ap, int),
				f ? (separator ? separator : "") : "\n");
	va_end(ap);
}
