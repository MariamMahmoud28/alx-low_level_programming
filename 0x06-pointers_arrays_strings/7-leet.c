#include "main.h"

/**
 * leet - encodes a string into 1337
 * @c: string
 * Return: string
 */

char *leet(char *c)
{
	char *cp = c;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	unsigned int j;

	while (*c)
	{
		for (j = 0; j < sizeof(key) / sizeof(char); j++)
		{
			/*32 is the difference between lower case letters and apper case letters*/
			if (*c == key[j] || *c == key[j] + 32)
			{
				*c = 48 + value[j];
			}
		}
		c++;
	}

	return (cp);
}
