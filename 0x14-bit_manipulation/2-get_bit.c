#include <stdio.h>
#include "main.h"

/**
 * get_bit - check the code returns the value of a bit at a given index
 * @index: is the index, starting from 0 of the bit you want to get
 * @n: is The number to find the index.
 * Return: the value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;

	if (n == 0 && index <= 63)
	{
		return (0);
	}

	bit = 0;

	while (bit <= 63)
	{
		if (index == bit)
		{
			return (n & 1);
		}
		n >>= 1;
		bit++;
	}

	return (-1);
}
