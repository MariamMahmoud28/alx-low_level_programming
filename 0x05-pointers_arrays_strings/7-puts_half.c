#include "main.h"

/**
 * puts_half - print second half of a string
 * @str: string type
 * Description: if odd number of chars, prints (length -1) / 2
 */

void puts_half(char *str)
{
	int m;

	for (m = 0; str[m] != '\n'; m++)
		;
	m++;
	for (m /= 2; str[m] != '\0'; i++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
