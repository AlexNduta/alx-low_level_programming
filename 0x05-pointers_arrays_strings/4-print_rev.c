#include "main.h"
/**
 *print_rev - prints a string in reverse
 *@s: the variable pointer in question
 *Return: void
 */

void print_rev(char *s)
{
	int i, j;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
