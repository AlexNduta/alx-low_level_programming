#include "search_algos.h"
/**
*binary_search - search for target element by dividing by half
*@array: pointer to the first element of the array we are traversing
*@size: the size of our array
*@value: The target value to look for
*Return: the target value on success
**/

int binary_search(int *array, size_t size, int value)
{
int first_num = 0;
int last_num = size - 1;
int mid_num = 0;

while (first_num <= last_num)
{
/*print_array(array, size); */
print_array(array + first_num, last_num - first_num + 1);

mid_num = (last_num + first_num) / 2;
if (array[mid_num] == value)
{
return (mid_num);
}
else if (array[mid_num] > value)
{
last_num = mid_num - 1;
}
else
{
first_num = mid_num + 1;
}

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
printf("Searched in:");
for (i = 0; i < size; i++)
{
printf("%d ", array[i]);
if (i < size - 1)
printf(",");
}
printf("\n");
}


