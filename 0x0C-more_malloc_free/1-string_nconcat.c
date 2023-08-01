#include "main.h"
/**
 *string_nconcat - concatenates two strings
 *@s1: destination string
 *@s2: source string
 *@n: the lenght of string
 *Return: pointer to a string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1;
	size_t len2;
	size_t i = 0;
char *pointer;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		pointer = malloc(len1 + len2 + 1);
	} else
	{
		pointer = malloc(len1 + n + 1);
	}

	if (pointer == NULL)
		return (NULL);

	while (*s1)
	{
		pointer[i++] = *s1++;
	}

	while (i < len1 + n && s2[i - len1] != '\0')
	{
		pointer[i] = s2[i - len1];
		i++;
	}

	pointer[i] = '\0';
	return (pointer);
}
