#include "main.h"
/**
 *_strncat - concatenates string arrays
 *@dest: thisis the starting string
 *@src: this is the string to be joined
 *
 *Return: dest
 */
char* _strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len] = '\0';
return (dest);
}
