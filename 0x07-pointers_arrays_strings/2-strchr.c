#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: pointer
 * @c: constant
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	int m;

	for (m = 0; s[m] >= '\0' ; m++)
	{
		if (s[m] == c)
		{
			return (s + m);
		}
	}

	return ('\0');
}
