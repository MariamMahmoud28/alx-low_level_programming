#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: input string
 * Return: encoded string
 */

char *rot13(char *s)
{
	int j;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = s;

	while (*s)
	{
		for (j = 0; j <= 52; j++)
		{
			if (*s == rot13[j])
			{
				*s = ROT13[j];
				break;
			}
		}
		s++;
	}
	return (ptr);
}
