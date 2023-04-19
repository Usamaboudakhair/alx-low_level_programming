#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: input integer array.
 * @size: is size of the array.
 * @cmp: is  pointer to the function to be used to compare values.
 * Return: int_index returns the index of the first element for which
 * the cmp function does not return 0 If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
