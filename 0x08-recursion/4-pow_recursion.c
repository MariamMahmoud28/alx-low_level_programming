#include "main.h"

/**
 * _pow_recursion - value
 * @x: base
 * @y: pow
 * Return: pointer to the null
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);

	return (_pow_recursion(x, y - 1) * x);
}
