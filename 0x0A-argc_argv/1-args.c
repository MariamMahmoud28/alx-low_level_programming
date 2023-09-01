#include <stdio.h>

/**
 * main-print prints the number of arguments
 * @argc: input
 * @argv: pointer
 * Return: 0-success, non-zero-fail
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
