#include "main.h"
/**
 *_strpn -gets the length of a prefix sub string
 *@s: pointer to charcter
 *accept: pointer to another character
 *Return: unsigned integer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len;

	if (s == NULL || accept == NULL)
	{
		return (0);
	}
	while (*s && _strchr(accept, *s++))
	{
		len++;
	}
	return (len);
}
