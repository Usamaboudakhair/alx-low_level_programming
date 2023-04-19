#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function given as a parameter on each
 * element of an array.
 * @array: input integer array.
 * @size: is size of the array.
 * @action: is pointer to the function.
 * Return: nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
		{
			action(*(array + i));
		}
}
