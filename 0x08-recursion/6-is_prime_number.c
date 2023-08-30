#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - check numbers
 * @n: int
 * @m: int
 * Return: 0 or 1
 */

int check_prime(int n, int m)i;
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check numbers
 * @n: int
 * @m: int
 * Return: value
 */

int check_prime(int n, int m)
{
	if (m >= n && n > 1)
		return (1);
	else if (n % m == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, m + 1));
}
