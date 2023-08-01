#include <stdio.h>
/**
 *main - prints all double digits dping away with any duplicate values
 *Return: 0 is always (Success)
 */
int main(void)
{
	int i;
	int j;

		for (i = 0; i < 9; i++)
		{
			for (j = i + 1; j < 10 ; j++)
			{
				if (i != j)
				{
					putchar((i % 10) + '0');
					putchar((j % 10) + '0');
					if (i != 8 || j != 9)
					{
						putchar(',');
						putchar(' ');
				}
				}
			}
		}
	putchar('\n');
	return (0);
}

