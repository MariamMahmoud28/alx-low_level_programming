#include "variadic_functions.h"

/**
 * print_strings - function that prints
 * @separator: pointer
 * @n: pointer
 * @...: int
 * @Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int m = n;
	char *str;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (m--)
		printf("%s%s", (str = va_arg(ap, char *)) ? str : "(nil)",
				m ? (separator ? separator : "") : "\n");
	va_end(ap);
}
