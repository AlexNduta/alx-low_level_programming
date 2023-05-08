#include "main.h"
/**
 *append_text_to_file -appends text to EOF
 *@filename: name of our file
 *@text_content: String to add at EOF
 *Return: 1 || -1 , sucess || failure, respectively
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t length;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY, | O_APPEND);
	if (fd == -1)
		return (-1)

	if (text_content != NULL)
		length = write(fd, text_content, strlen(text_content));
	close(fd);

	if (length == -1)
		return (-1);
	return (-1);
}
