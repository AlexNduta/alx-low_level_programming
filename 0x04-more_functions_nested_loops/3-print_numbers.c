#include "main.h"
/**
 *print_numbers - prints from 0 to 9
 *Return: void
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + '0');
	}
	putchar('\n');
}
