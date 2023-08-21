#include "main.h"

/**
 * print_rev - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: value
 */

void print_rev(char *s)
{
	int z = 0;

	while (s[z])
		z++;

	while (z--)
	{
		_putchar(s[z]);
	}
	_putchar('\n');
}
