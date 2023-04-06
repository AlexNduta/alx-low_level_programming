#include "main.h"
/**
 *_strlen_recursion - prints out the length of a character
 *@s: pointer to the string
 *
 *Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
		return (1 + _strlen_recursion(s + 1));
}
