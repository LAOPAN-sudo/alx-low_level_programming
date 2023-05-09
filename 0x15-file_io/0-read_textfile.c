#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints its contents.
 * @filename: A pointer to the name of the file to be read.
 * @letters: The number of characters that the function should read and print.
 * Return: If the function fails or the filename is NULL - 0.
 *         Otherwise, return the actual number of bytes read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	bytes_read = fread(buffer, sizeof(char), letters, file);
	if (bytes_read == 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	buffer[bytes_read] = '\0';

	bytes_written = printf("%s", buffer);

	fclose(file);
	free(buffer);

	if (bytes_written < bytes_read)
		return (0);

	return (bytes_written);
}
