#include "main.h"
/**
 *str_concat - concatenates to strings
 *@s1: the destination string
 *@s2: the source string
 *
 *Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	size_t len1, len2, i = 0;

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (s1 == NULL || s2 == NULL)
		return (NULL);


	concat = malloc((len1 + len2) + 1);

	while (*s1)
	{
		concat[i++] = *s1++;
	}

	while (*s2)
	{
		concat[i++] = *s2++;
	}

	concat[i] = '\0';
	return (concat);
}

