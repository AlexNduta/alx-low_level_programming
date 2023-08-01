#include "main.h"
/**
 *argstostr - combines all argumemnts to the program
 *@ac: int representing the number of arguments
 *@av: array of strings representing the arguments
 *
 *Return: pointer to the output string
 */
char *argstostr(int ac, char **av)
{
	char *string, *stream;
	int i, k, j, length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		stream = av[i];
		j = 0;

		while (stream[j] != '\0')
		{
			j++;
			length++;
		}
		length++;
	}
	string = malloc(sizeof(char) * (length + 1));
	if (string == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac && j < length; i++)
	{
		stream = av[i];

	k = 0;
	while (stream[k] != '\0')
	{
		string[j] = stream[k];
		k++;
		j++;
	}
	string[j++] = '\n';
	}
	string[j] = '\0';
	return (string);
}
