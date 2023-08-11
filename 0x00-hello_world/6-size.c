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
	printf("Size of a char: %u byte(s)\n", Sizeof(char));
	printf("Size of an int: %ui byte(s)\n", Sizeof(int));
	printf("Size of a long int: %u byte(s)\n", Sizeof(long int));
	printf("Size of a log long int: %u byte(s)\n", Sizeof(long long int));
	printf("Size of a float: %u byte(s)\n", sizeof(float));
	return (0);
}
