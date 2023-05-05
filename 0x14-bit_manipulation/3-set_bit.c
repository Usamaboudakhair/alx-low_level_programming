#include <stdio.h>
#include "main.h"

/**
 * set_bit - check the code sets the value of a bit to 1 at a given index.
 * @index: is the index, starting from 0 of the bit you want to get
 * @n: is The number to find the index.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit;

	bit = 1;
	if (index > 63)
	{
		return (-1);
	}

	bit = bit << index;

	*n = (*n | bit);

	return (1);
}
