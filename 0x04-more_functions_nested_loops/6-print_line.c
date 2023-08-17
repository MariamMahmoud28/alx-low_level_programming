#include "main.h"

/**
 * print_line - print a straight line
 *
 * @n: is the number of times the - character
 *		should be printed
*/

void print_line(int n)
{
	int z;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (z = 1; z <= n; z++)
			_putchar('95');
		_putchar('\n');
	}
}
