#include "main.h"
/**
 *_strpn -gets the length of a prefix sub string
 *@s: pointer to charcter
 *accept: pointer to another character
 *Return: unsigned integer
 */
unsigned int _strpn(char *s, char *accept)
{
	unsigned int len;

	len = strspn(s, accept);

	return (len);
}
