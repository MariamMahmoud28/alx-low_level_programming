#include "main.h"

/**
 * puts_half - print second half of a string
 * @str: char array string type
 * Description: If odd number of chars, prints (length -1) / 2
 */

void puts_half(char *str)
{
	int m;

	for (m = 0; str[m] != '\n'; m++)
		;
	m++;
	for (m /= 2; str[m] != '\0'; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
