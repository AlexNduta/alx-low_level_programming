#include "main.h"
#include <ctype.h>
/**
 * _islower - is used to check if the given integer is lowercase
 *@c: The character to be checked
 *Return: 1 if character is lowercsee, 0 otherwise.
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
		return (0);
}
