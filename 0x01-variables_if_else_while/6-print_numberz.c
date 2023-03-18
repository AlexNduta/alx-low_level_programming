#include <stdio.h>
/**
 *main -prints the base 10 characters using putchar()
 *Return: 0 is always (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
