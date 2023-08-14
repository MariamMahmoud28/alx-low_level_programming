#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using sizeof to print the size of various types.
 *
 * Return: always 0 (success)
*/
int main(void)
{
	int i;
	char d;
	float f;
	long long int l;
	long int c;

	printf("Size of a char: %d byte(s)\n", sizeof(d));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %d byte(s)\n", sizeof(c)));
	printf("Size of a log long int: %d byte(s)\n", sizeof(l));
	printf("Size of a float: %d byte(s)\n", sizeof(f));
								return (0);
}
