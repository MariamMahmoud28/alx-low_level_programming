#include "main.h"

/**
 * _sqrt - finds the square root
 *
 * @x: input number
 *
 * Return: square root of x
*/

double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_factor - finds and prints the largest
 *		prime factor of number (num)
 *
 * @num: number to find
*/

void largest_prime_factor(long int num)
{
	int prmNm, largest;

	/* first divide with the smallest prime number (two) */
	while (num % 2 == 0)
		num = num / 2;
	/* num must be add so we proceed to the next prime number (plust two) */
	for (prmNm = 3; prmNm <= sqrt(num); prmNm += 2)
	{
		while (num % prmNm == 0)
		{
			num = num / prmNm;
			largest = prmNm;
		}
	}

	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}

/**
 * main - entry point
 *
 * Return: 0 (success)
*/

int main(void)
{

	largest_prime_factor(612852475143);

	return (0);
}
