#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void copy_file(char *file_from, char *file_to);

/**
 * copy_file - Copies the content of one file to another.
 * @file_from: The source file name.
 * @file_to: The destination file name.
 */
void copy_file(char *file_from, char *file_to)
{
	int from, to, r, w;
	char buffer[1024];

	from = open(file_from, O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	do {
	r = read(from, buffer, sizeof(buffer));
	if (r == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", file_from);
		exit(98);
	}

		w = write(to, buffer, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to file %s\n", file_to);
			exit(99);
		}

	} while (r > 0);

	if (close(from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %s\n", file_from);
		exit(100);
	}

	if (close(to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %s\n", file_to);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: On success, 0. On failure, an exit code.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}
