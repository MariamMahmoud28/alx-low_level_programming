#include "main.h"

/**
 * *_strncpy - A function that copies a string.
 *
 * @dest: pointer to destinatoin input buffer
 * @src: pointer to source input buffer
 * @n: bytes of @src
 *
 * Return: @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int z;

	/**
	 * iterate through src array
	 * where if there is no null byte
	 * among the first n bytes of source
	 * the string placed in dest will not be
	 * null terminated
	 */
	for (z = 0; z < n && src[z] != '\0'; z++)
		dest[z] = src[z];
	/**
	 * if the length of the source is less than n
	 * write additional nullbytes to dest to
	 * ensure that a total of n bytes is written
	 */
	while (z < n)
	{
		dest[z] = '\0';
		z++;
	}

	return (dest);
}
