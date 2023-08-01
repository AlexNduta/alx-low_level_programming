#include "main.h"
/**
 *create_array -  creates an array and allocate memory
 *@size: size of the array
 *@c: contents of the array
 *
 *Return: pointer to string
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *string = malloc(sizeof(char) * size);
if (string == NULL)
{
	return (NULL);
}

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		string[i] = c;
	}
	return (string);
}
