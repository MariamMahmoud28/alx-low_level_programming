#include <unistd.h>

/**
 * _putchar - writes the charater c to the stdout
 * @c: the character to print
 *
 * Return: Success 1.
 * on error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
