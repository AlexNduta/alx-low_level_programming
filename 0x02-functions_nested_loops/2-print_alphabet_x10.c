#include <stdio.h>
/**
 *print_alphabet_x10 prints the alphabet in lowercase 10 times
 *return void
 */
void print_alphabet_x10(void)
{
	int i, x;
		for (i = 1; i <= 10; i++)
		{
			putchar('\n');
				for (x = 0; x < 26; x++)
				{
					putchar(x + 'a');
				}
		}
}
