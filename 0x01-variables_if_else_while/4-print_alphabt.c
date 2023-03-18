#include <stdio.h>
/**
 *main -prints the alphabet and skips 'e' and 'q'
 *Return: 0 i always (Success)
 */
int main(void)
{
	char letter = 'a';

	for (int i = 'a'; i < 'z'; i++)
	{
		if (i == 'e' || i == 'q')
		{
			letter++;
			continue;
		}
	putchar(letter);
	letter++;
	}
	return (0);
}

