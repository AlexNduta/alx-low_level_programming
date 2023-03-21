#include "main.h"
#include <ctype.h>
/**
 *_isalpha - checks for alphabetic character
 *@c: variable that is used to make checks
 *Return: 1 if its alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
