#include <stdio.h>
#include <stdlib.h>
/**
 *main- entry point of the function
 *@argc: argument counter
 *@argv: argumnet vector
 *
 *Return: zero is always success
 */
int main(int argc, char *argv[])
{
	int i;
	int product = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i <= 2; i++)
	{
		product = product * atoi(argv[i]);
	}
	printf("%d\n", product);
	return (0);
}
