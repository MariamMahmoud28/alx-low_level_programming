#include "main.h"

/**
 * wrdcnt -  string
 * @s: pointer
 * Return: value
 */

int wrdcnt(char *s)
{
	int f = 0, m = 0;

	for (; s[f]; f++)
	{
		if (s[f] == ' ')
		{
			if (s[f + 1] != ' ' && s[f + 1] != '\0')
				m++;
		}
		else if (f == 0)
			m++;
	}
	m++;
	return (m);
}

/**
 * **strtow - function
 * @str: pointer
 * Return: value
 */

char **strtow(char *str)
{
	int f, a, b, c, m = 0, wc = 0;
	char **k;

	if (str == NULL || *str == '\0')
		return (NULL);
	m = wrdcnt(str);
	if (m == 1)
		return (NULL);
	k = (char **)malloc(m * sizeof(char *));
	if (k == NULL)
		return (NULL);
	k[m - 1] = NULL;
	f = 0;
	while (str[f])
	{
		if (str[f] != ' ' && (f == 0 || str[f - 1] == ' '))
		{
			for (a = 1; str[a + f] != ' ' && str[a + f]; a++)
				;
			a++;
			k[wc] = (char *)malloc(a * sizeof(char));
			a--;
			if (k[wc] == NULL)
			{
				for (b = 0; b < wc; b++)
					free(k[b]);
				free(k[m - 1]);
				free(k);
				return (NULL);
			}
			for (; c < a; c++)
			k[wc][c] = str[f + c];
			k[wc][c] = '\0';
			wc++;
			f += a;
		}
		else
			f++;
		}
		return (k);
}
