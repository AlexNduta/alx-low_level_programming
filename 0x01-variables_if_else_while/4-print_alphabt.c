#include <stdio.h>
/**
 *main -prints the alphabet and skips 'e' and 'q'
 *Return: 0 i always (Success)
 */
int main(void)
{
	char letter = 'a';
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
		{
			letter++;
			continue;
		}
	putchar(letter);
	letter++;
	}
	putchar('\n');
	return (0);
}

