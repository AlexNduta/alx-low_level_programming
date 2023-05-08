#include "main.h"
/**
 *create_file - creates a file that is read and written to
 *@text_conten: complete string to write to the file
 *@filename: name of the file to be manipulated
 *@Return: 1 || -1 success || failure, reapectively
 */
int create_file(const char *filename, char *text_content)
{
	int fd, nwrite, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
	/*calculate then length of the  text content */
		while (text_content[length] != '\0')
		{
			length++;
		}
	}

	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	nwrite = write(fd, text_content, length);

	if (fd == -1 || nwrite == -1)
		return (-1);
	close(fd);
	return (-1);
}

