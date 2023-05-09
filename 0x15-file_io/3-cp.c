#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 *main - Copiex context of file x to y
 *@argc: Number of arguments passed.
 *@argv: Array of pointers to the arguments
 *
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int _from, _to;
	ssize_t lengthr, lengthw;
	char buffer[1024];
mode_t file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	/*check number of argumnets */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to \n");
		exit(97);
	}

	/* open the file_from*/
	_from = open(argv[1], O_RDONLY);
	if (_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}

	/*open the file_to */
	_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	if (_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(_from);
		exit(99);
	}

	/* copy file contents */
	while ((lengthr = read(_from, buffer, 1024)) > 0)
	{
	lengthw = write(_to, buffer, lengthr);
		if (lengthw != lengthr)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(_from);
			close(_to);
			exit(99);
		}
	}

	/*Check for errors durring copying process */
	if (lengthr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(_from);
		close(_to);
		exit(98);
	}

	/*Close  the files */
	if (close(_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", _from);
		exit(100);
	}

	if (close(_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", _to);
		exit(100);
	}

	return (0);
}
