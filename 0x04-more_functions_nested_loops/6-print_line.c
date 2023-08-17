#include "main.h"

/**
 * print_line - print a straight line
 *
 * @n: the number of times the - character
 *		should be printed
*/

void print_line(int n)
{
	int lnchr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnchr = 1; lnchr <= n; lnchr++)
			_putchar('95');
		_putchar('\n');
	}
}
