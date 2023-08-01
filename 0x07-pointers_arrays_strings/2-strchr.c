#include "main.h"
/**
 *_strchr -  locates characters in s string
 *@s: pointer to null byte
 *@c: character to search for
 *
 *Return: pointer to a null byte
 */
char *_strchr(char *s, char c)
{
	char *isCharFind = NULL;

	if (s != NULL)
	{
		while (*s != '\0')
		{
			if (*s == c)
			{
				isCharFind = s;
				break;
			}
		s++;
		}
	}
	return (isCharFind);
}
