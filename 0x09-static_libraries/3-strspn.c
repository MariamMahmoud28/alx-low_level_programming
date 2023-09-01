#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer.
 * @accept: bytes.
 * Return: value.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int m, e;

	for (m = 0; s[m] != '\0'; m++)
	{
		for (e = 0; accept[e] != s[m]; e++)
		{
			if (accept[e] == '\0')
				return (m);
		}
	}
	return (m);
}
