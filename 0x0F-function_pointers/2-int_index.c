#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: input array
 * @size: number of elements in array
 * @cmp: function supplied
 *
 * Return: Success 0, Fail -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0 || array == NULL || cmp == NULL)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
