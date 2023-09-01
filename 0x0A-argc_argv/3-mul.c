#include <stdio.h>
#include <stdlib.h>
/**
 * main-print multiplies two numbers.
 * @argc: int
 * @argv: pointer
 * Return: 0-success
 */

int main(int argc, char *argv[])
{
	int s;

	if (argc == 3)
	{
		s = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", s);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
