#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the numbers of times the \ character
 *	should be printed
*/

void print_diagonal(int n)
{
	int z, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (z = 1; z <= n; z++)
		{
			for (space = 1; space <= z; space++)
				putchar(' ');
			_putchar(92); /*is equal to '/' char*/
			_putchar('\n');
		}
	}
}
