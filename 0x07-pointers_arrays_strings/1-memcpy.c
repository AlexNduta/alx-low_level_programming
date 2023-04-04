#include "main.h"
/**
 *_memcpy - copy from destinantion to another  destination
 *@dest: pointer to the destination buffer
*@src: a pointer to the source buffer containing the data to be copied
 *@n: the number of bytes to be copied
 *
 *Return: pointer destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	const char *source = (const char *) src;

	if (dest != NULL && source != NULL)
	{
		while (n)
		{
			*(dest++) = *(source++);
			--n;
		}
	}
	return (dest);
}
