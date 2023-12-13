#include "search_algos.h"
/**
* linear_search - a function to search through our list and get the array
* @array: pointer to the array to traverse
* @size: the size of the array to traverse
* @value: the value to return
* Return: an integer if succesful
**/

int linear_search(int *array, size_t size, int value)
{
size_t i = 0;

if (!array)
    return (-1);
for (i = 0; i < size; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
