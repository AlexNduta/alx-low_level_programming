#include <stdio.h>
/**
 *print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int x;
		while (i++ <= 9)
		{
			for (x = 0; x < 26; x++)
			{
				putchar(x + 'a');
			}
			putchar('\n');
		}
}
