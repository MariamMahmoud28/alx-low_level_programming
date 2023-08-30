#include "main.h"
/**
 * _sqrt_recursion - square
 * @n: int
 * @m: square root of number
 * Return: value
 */
int square(int n, int m);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - get square root
 * @n: int
 * @m: square root
 * Return: value
 */

int square(int n, int m)
{
	if (m * m == n)
		return (m);
	else if (m * m < n)
		return (square(n, m + 1));
	else
		return (-1);
}
