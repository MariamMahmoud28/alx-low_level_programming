#include "main.h"
#include <errno.h>
#define USAGE "Usage: cp file_from file_to\n"

#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - main program
 * @ac: count
 * @av: vector
 * Return: 1 if sucx 0 on fail
 */
int main(int ac, char **av)
{
	int current = 0, new = 0;
	ssize_t n;
	char buf[READ_BUF_SIZE];


	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	current = open(av[1], O_RDONLY);
	if (current == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);

	new = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (new == -1)
	dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);

	while ((n = read(current, buf, READ_BUF_SIZE)) > 0)
		if (write(new, buf, n) != n)
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	if (n == -1)
	dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	current = close(current);
	new = close(new);
	if (current)

		dprintf(STDERR_FILENO, ERR_NOCLOSE, current), exit(100);
	if (new)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, current), exit(100);
	return (EXIT_SUCCESS);
}
