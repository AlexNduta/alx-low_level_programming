#include "sort.h"

/**
*buble_sort - sorts elements in a list using bublesort algo
*
*@array: The input array to be sorted
*@size: The size of of our input arra
*/
void bubble_sort(int *array, size_t size)
{
/*O(1)*/
size_t i, j, k, temp;
/*O(1) */
if (array == NULL || size < 2)
return;
/*O(n) */
for (i = 0; i < size - 1; i++)
{
    /*O(n^2)*/
for (j = 0; j < size - i - 1; j++)
{
    /*O(1)*/
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
}
/*O(n)*/
for (k = 0; k < size; k++)
{
printf("%d ,", array[k]);
}
printf("\n");
}
}
}

