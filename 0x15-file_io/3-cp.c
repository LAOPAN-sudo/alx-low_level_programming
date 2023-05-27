#include "main.h"

/**
 * main -programme that copies the content of a file to another
 * @ac: argument count
 * @av: argument vector
 *
 * Return: always 0 (Success)
 */
int main(int ac, char **av)
{
	int from;
	int to;
	char buffer[1024];
	ssize_t k, l;

	if (ac != 3)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);

	from = open(av[1], O_RDONLY);
	to = open(av[2], O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 0664);
	if (from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	if (to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	do {
		k = read(fd_from, buffer, 1024);
		if (k == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		l = write(fd_to, buffer, i);
		if (l == -1 || l != i)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	} while (k);


	k = close(from), l = close(to);
	if (k || l)
	{
		if (k)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		if (l)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		exit(100);
	}
	return (0);
}
