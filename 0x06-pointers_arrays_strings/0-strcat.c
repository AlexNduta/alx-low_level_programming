#include "main.h"
/**
 *_strcat - the concatinates our source string to our destination string
 *@dest: pointer to the first element of our destination array
 *@src: pointer to the first element of our source  array
 *
 *Return: the destination pointer
 */
char  *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
