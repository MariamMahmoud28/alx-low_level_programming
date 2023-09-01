#include "main.h"

/**
 * _puts - a string, followed by a newline to stdout
 *
 * @str: string parameter
 *
 * Return: value
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
