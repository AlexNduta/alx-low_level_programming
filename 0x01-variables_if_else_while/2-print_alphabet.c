#include <stdio.h>
/**
 *main -loops through the alphabet
 *@i - varible  that holds the alphabets
 *Return: 0 always (Success)
 */
int main(void)
{
	char letter = 'a';
	int i;

	for (i = 0; i < 26; i++)
{
	putchar(letter);
	letter++;
}
	putchar('\n');
	return (0);
}
