#include "main.h"

/**
 * *_strdup - returns a pointer to a newly
 * @str: pointer
 * Return: value
*/

char *_strdup(char *str)
{
	int f = 0, z = 0;
	char *n;

	if (str == NULL)
		return (NULL);

	for (; str[z] != '\0'; z++)
		;

	/*+1 end of string*/
	n = malloc(z * sizeof(*str) + 1);

	if (n == 0)
		return (NULL);
	{
		for (; f < z; f++)
			n[f] = str[f];
	}
	return (n);
}
