#include "main.h"

/**
 * _isupper - check c upper
 *
 * @c: input for alphabet
 *
 * Return: 1 if it is upprecase , 0 if not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
