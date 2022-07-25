#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int writtenFile;
	int numOfLetters = 0;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
	{
		return -1;
	}

	if (text_content == NULL)
	{
		text_content = ""; /* text context will be an empty string */
	}
	for (numOfLetters = 0; text_content[numOfLetters]; numOfLetters++)
	{
		;
	}
	writtenFile = write(fd, text_content, numOfLetters);
	if (writtenFile == -1)
		return (-1);

	close(fd);
	return 1;
}
