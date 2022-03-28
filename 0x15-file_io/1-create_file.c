#include "main.h"
#include <string.h>
/**
 * create_file-creates a file
 * @filename: text file to read and printed
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */


int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	if (filename != NULL)
	fd = open(filename, O_WRONLY & O_CREAT & O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT, 0600);
		if (fd == -1)
			return (-1);
		if (text_content != NULL)
		write(fd, text_content, _strlen(text_content));
	}

	close(fd);
	return (1);
}
