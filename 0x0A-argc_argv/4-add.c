#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: int
 * @argv: pointer
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int s = 0;
	char *h;

	while (--argc)
	{
		for (h = argv[argc]; *h; h++)
			if (*h < '0' || *h > '9')
				return (printf("Error\n"), 1);
		s += atoi(argv[argc]);
	}
	printf("%d\n", s);
	return (0);
}
