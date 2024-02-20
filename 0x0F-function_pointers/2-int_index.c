#include "function_pointer.h"

/**
 * int_index - searches for an integer
 * @array: an array
 * @size: number of elements in array
 * @cmp: pointer to the function
 * Return: the index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (array && size && cmp)
{
while (i < size)
{
if (cmp(array[i]))
return (i);
i++;
}
}
return (-1);
}
