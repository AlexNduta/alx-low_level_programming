#include <stdio.h>
/**
 *main -prints the alphabet in reverse
 *Return: 0 is always (Success)
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		{
		putchar(i);
		}
	putchar('\n');
	return (0);
}

