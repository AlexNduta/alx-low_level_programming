#include "main.h"
/**
 *_strdup - creates a copy of a string
 *@str: the input string
 *
 *Return: the string to be copied
 */
char *_strdup(char *str)
{
	char *copy;
	size_t len;
	size_t i = 0;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	copy = malloc((len + 1) * sizeof(char));

	if (copy == NULL)
		return (NULL);

	while (i < len)
	{
		copy[i] = str[i];
		i++;
	}
	copy[len] = '\0';
	return (copy);
}
