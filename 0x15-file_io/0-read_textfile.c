#include "main.h"
/**
 *read_textfile - reads a textfile and print to POSIX  STDOUT
 *@filename: name of of file to access
 *@letters: number of bytes to print
 *
 *Return: number of letters to print and read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, nwrite, nread;
char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}

	/*read */
	nread = read(fd, buff, letters);
	if (nread == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}

	/* write to the file */
	nwrite = write(STDOUT_FILENO, buff, nread);
	if (nwrite == -1 || nwrite != nread)
	{
		free(buff);
		close(fd);
		return (0);
	}

	free(buff);
	close(fd);
	return (nwrite);
}
