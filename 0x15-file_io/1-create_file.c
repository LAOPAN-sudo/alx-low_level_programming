#include "main.h"
#include <stdio.h>

/**
 * create_file - Creates a file with the given name and writes the
 *               specified text content to it.
 * @filename: The name of the file to create.
 * @text_content: The NULL-terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file, bytes_written, length = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
			length++;

		bytes_written = write(file, text_content, length);
		if (bytes_written == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
