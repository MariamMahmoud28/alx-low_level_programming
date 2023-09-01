#include <stdio.h>
#include <stdlib.h>

/**
 * main - number of coins to
 * @argc: int
 * @argv: pointer
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
	int f, leastcents = 0, money = atoi(argv[1]);
	 int cents[] = {25, 10, 5, 2, 1};

	for (f = 0; f < 5; f++)
	{
		if (money >= cents[f])
		{
			leastcents += money / cents[f];
			money = money % cents[f];
			if (money % cents[f] == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", leastcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
