#include "main.h"
#include <stdio.h>

/**
 * *string_nconcat - concatenates
 * @s1: pointer
 * @s2: pointer
 * @n: number of bytes
 *
 * Return: value
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int k, j, s1_length, s2_length;
	/*check*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*length of string*/

	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
		;
	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
		;
	/*Memory reservation-for case 1 & 2.*/
	str = malloc(s1_length + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	/*copy*/
	for (k = 0; s1[k] != '\0'; k++)
		str[k] = s1[k];
	/*copy second*/
	for (j = 0; j < n; j++)
	{
		str[k] = s2[j];
		k++;
	}
	str[k] = '\0';
	return (str);
}
