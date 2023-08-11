#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphabet is lowercase than in uppercase
 *
 * Return: 0 (success)
 */

int main(void)
{
	char ch = 'a';
	char ch = 'A';

	/*prints a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*print A - Z*/
	while (ch <= 'Z')
	{
		putcher(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
