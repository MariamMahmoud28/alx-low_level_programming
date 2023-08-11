#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using sizeof print size of various types on the computer
 *
 * Return: always 0 (success)
 */

int main(void)
{
	printf("Size of a char: %u byte(s)\n", sizeof(char));
	printf("Size of an int: %ui byte(s)\n", sizeof(int));
	printf("Size of a long int: %u byte(s)\n", sizeof(long int));
	printf("Size of a log long int: %u byte(s)\n", sizeof(long long int));
	printf("Size of a float: %u byte(s)\n", sizeof(float));
	return (0);
}
