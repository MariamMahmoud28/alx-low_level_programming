#include "main.h"

/**
 * _puts - prints a string
 * @str: pointer
 * Return: value
 */

void _puts(char *str)
{
	int m = 0;

	while (str[m])
	{
		_putchar(str[m]);
		m++;
	}

}

/**
 * _atoi - string
 * @s: string
 * Return: integer
 */

int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int resp = 0, firstNum, m;

	for (firstNum = 0; !(s[firstNum] >= 48 && s[firstNum] <= 57); firstNum++)
	{
		if (s[firstNum] == '-')
		{
			sign *= -1;
		}
	}

	for (m = firstNum; s[m] >= 48 && s[m] <= 57; m++)
	{
		resp *= 10;
		resp += (s[m] - 48);
	}

	return (sign * resp);
}

/**
 * print_int - integer
 * @n: int
 * Return: 0
 */

void print_int(unsigned long int n)
{
	unsigned long int divisor = 1, m, resp;

	for (m = 0; n / divisor > 9; m++, divisor *= 10)
	;

	for (; divisor >= 1; n %= divisor, divisor /= 10)
	{
		resp = n / divisor;
		_putchar('0' + resp);
	}

}

/**
 * main - result
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

			return (0);
}
