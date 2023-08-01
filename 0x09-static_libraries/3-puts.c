#include "main.h"
/**
 *_puts - prints on the stdout
 *@s: variable in question
 *
 *Return: void
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
