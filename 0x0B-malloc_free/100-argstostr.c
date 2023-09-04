#include "main.h"

/**
 * _strlen - string
 * @s: string
 * Return: value
 */

int _strlen(char *s)
{
	int z = 0;

	for (z = 0; s[z] != '\0'; z++)
		return (z);
}

/**
 * *argstostr - concatenates
 * @ac: pointer
 * @av: pointer
 * Return: value
 */

char *argstostr(int ac, char **av)
{
	int m = 0, n = 0, g = 0, c = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (m = 0; m < ac; m++, n++)
		n += _strlen(av[m]);

	s = malloc(sizeof(char) * n + 1);
	if (s == 0)
		return (NULL);

	for (m = 0; m < ac; m++)
	{
		for (g = 0; av[m][g] != '\0'; g++, c++)
			s[c] = av[m][g];

		s[c] = '\n';
		c++;
	}
	s[c] = '\0';
	return (s);
}
