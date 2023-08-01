#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  *main - generates random numbers and checks if its positive
  *@n :  holds the value of the random function
  *Return : 0 is always sucess
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n > 0)
{
	printf("%d is positive\n", n );
} else if (n == 0)
{
	printf("%d is zero\n", n );
} else
{
	printf("%d is negative\n", n );
}
	return (0);
}
