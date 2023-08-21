#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string
 *
 * Return: value
*/

void rev_string(char *s)
{
	int j, i;
	char t;

	/*find string length without nullchar*/
	for (j = 0; s[j] != '\0'; ++j)
		;
	/*swap the string by looping to half the string*/
	for (i = 0; i < j / 2; i++)
	{
		t = s[i];
		s[i] = s[j - 1 - i]; /*-1 because the arry starts from 0*/
		s[j - 1 - i] = t;
	}
}
