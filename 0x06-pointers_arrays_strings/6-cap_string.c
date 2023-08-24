#include "main.h"
#include <stdio.h>

/**
 * isLower - determines whether ascii is lowercase
 * @c: character
 * Return: 1 if teue, 0 if false
 */

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimter - determines whether ascii is a delimiter
 * @c: character
 * Return: 1 if teue, 0 if false
 */

int isDelimiter(char c)
{
	int j;
	char delimiter[] = " \t\n,.!?"() {} ";

	for (j = 0; j < 12; j++)
		if (c == delimiter[j])
			return (1);
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @s: input string
 * Return: string with capitalized words
*/

char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelimit = 1;
	
	while (*s)
	{
		if (isDelimiter(*s))
			foundDelimit = 1;
		else if (isLower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		s++;
	}
	return (ptr);
}
