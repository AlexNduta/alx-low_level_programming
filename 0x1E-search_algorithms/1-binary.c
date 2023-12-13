#include "search_algos.h"
/**
 *binary_search - search for target element by dividing by half
 *
 *@array: pointer to the first element of the array we are traversing
 *@size: the size of our array
 *@value: The target value to look for
 *Return the target value on success
 **/
int binary_search(int *array, size_t size, int value)
{
int first_num = 0;
int last_num = size - 1;
size_t i = 0;
int mid_num = 0;

while (first_num <= last_num)
{
for (i = 0; i < size; i++)
{
printf("searching in array: %d\n", *array);
}

mid_num = (first_num + last_num) / 2;
if (mid_num < value)
{
first_num = mid_num + 1;
}
else if (mid_num > value)
{
last_num = mid_num - 1;
}
else
{
return (mid_num);
}
return (-1);
print_array(array, size);
}
return (0);
}

/**
 *print_array - prints the array
 *@array: pointer to the first element of our array
 *@size: size of the array
 **/

void print_array(int *array, size_t size)
{
size_t i;
for (i = 0; i < size; i++)
{
printf("searching in array: %d\n", array[i]);
}
printf("\n");
}


