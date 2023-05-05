#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: The number to modify.
 * @index: is the index, starting from 0 of the bit you want to set.
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int clear;

	clear = 1;
	if (index > 63)
		return (-1);

	clear = clear << index;
	*n &= ~(1UL << index);

/*if (*n & clear)*n ^= clear;*/

	return (1);
}
