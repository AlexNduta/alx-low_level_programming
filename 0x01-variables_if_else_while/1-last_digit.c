#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 i*main - checks equality on the last digit of the random digit
 *@n -holds value of the random digit
 *@last_num - holds the value of last digit
 *Return: 0 always (Success)
 */
int main(void)
{
	int n, last_num;

	last_num = n % 10;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (last_num > 5)
{
printf("Last digit of %d is %d and is greater than 5", n, last_num);
} else if (last_num == 0)
{
	printf("Last digit of %d is %d and id 0", n, last_num);
} else
{
	printf("Last digit of %d is %d and is less than 6 and not 0", n, last_num);
}
	return (0);
}
