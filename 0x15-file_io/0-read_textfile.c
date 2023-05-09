#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed,
 *         or 0 if an error occurred.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);

	int file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	char *buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}

	ssize_t bytes_read = read(file, buffer, letters);
	if (bytes_read == -1)
	{
		close(file);
		free(buffer);
		return (0);
	}

	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		close(file);
		free(buffer);
		return (0);
	}

	close(file);
	free(buffer);
	return (bytes_written);
}
