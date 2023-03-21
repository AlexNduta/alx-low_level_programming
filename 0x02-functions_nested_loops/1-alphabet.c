#include <stdio.h>
/**
 *print_aphabet- prints the whole alphabet
 *No return statement
 */
void print_alphabet(void)
{
	int x;
		for (x = 0; x < 26; x++)
		{
			putchar(x + 'a');
		}
	putchar('\n');
}
