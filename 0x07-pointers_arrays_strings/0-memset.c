#include "main.h"
/**
 *_memset - copies values of b to the specified memory address
 *@s: pointer to a memory address
 *@b: the value we want to set each byte of memory to
 *@n: The number of bytes we want to set
 *
 *Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *p = (unsigned char *)s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}
