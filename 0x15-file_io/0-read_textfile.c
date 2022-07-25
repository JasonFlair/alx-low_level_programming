ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t fileread, filewritten;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	fileread = read(fd, buffer, letters);
	filewritten = write(STDOUT_FILENO, buffer, fileread);

	close(fd);

	free(buffer);

	return (filewritten);
}
