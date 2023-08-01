#include <stdio.h>
/**
 *main - prints hex numbers in decimal usin putchar
 *Return: 0 is always (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
		{
		if (i < 10)
		{
			putchar('0' + i);
		} else
			{
					putchar('a' + i - 10);
				}
	}
	putchar('\n');
	return (0);
}
