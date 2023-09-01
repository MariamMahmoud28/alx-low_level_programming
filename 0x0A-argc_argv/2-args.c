#include <stdio.h>

/**
 * main - arguments it receives.
 * @argc: pointer
 * @argv: list
 * Return: value
 */

int main(int argc, char const *argv[])
{
	int z = 0;

	while (argc--)
	{
		printf("%s\n", argv[z]);
		z++;
	}

	return (0);
}
