#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  *main - generates random numbers and checks if its positive
  *@n : this is the variable that holds the vallue of theb= random function
  *Return : 0 always (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n > 0)
{
	printf("%d is positive\n", n);
} else if (n == 0)
{
	printf("%d is zero\n", n);
} else
{
	printf("%d is negative\n", n);
}
	return (0);
}
