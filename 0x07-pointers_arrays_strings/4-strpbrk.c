#include "main.h"
/**
 *_strpbrk - checks occurence of charcters in a string
 *@s: string to be checked
 *@accept: characters to be matched
 *
 *Return: pointer to  s
 */
char *_strpbrk(char *s, char *accept)
{
	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}
	while (*s)
	{
		char *a = accept;

		while (*a)

		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (s);
}
