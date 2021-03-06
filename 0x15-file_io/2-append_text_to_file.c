#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: Pointer to file.
 * @text_content: Pointer to string to append.
 *
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, len = 0, fd_write;

	if (filename != NULL)
	{
		file = open(filename, O_WRONLY | O_APPEND);
		if (file == -1)
			return (-1);
		if (text_content && text_content[len])
		{
			while (text_content[len])
				len++;
			fd_write = write(file, text_content, len);
			if (fd_write == -1)
				return (-1);
		}
		close(file);
		return (1);
	}
	return (-1);
}
