#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes.
 * @s: pointer
 * @accept: string
 * Return: pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int m, j;
	char *b;

	m = 0;
	while (s[m] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[m])
			{
				b = &s[m];
				return (b);
			}
			j++;
		}
		m++;
	}

	return (0);
}
