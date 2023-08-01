#include <stdio.h>
/**
 *main- prints out a combo of all possible single diigt characters
 *Return: 0 is always (Success)
  */
int main(void)
{
	int x;

		for (x = 0; x < 10; x++)
		{
			putchar(x + '0');
				if (x < 9)
				{
					putchar(',');
					putchar(' ');
				}
		}
	putchar('\n');
	return (0);
}
