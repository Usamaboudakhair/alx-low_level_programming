#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: unsigned long int number 1 .
 * @m: unsigned long int number 2.
 *
 * Return: ....
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip, bits;

	bits = n ^ m;
	flip = 0;
	while (bits >= 1)
	{
		if (bits & 1)
			flip++;
		bits >>= 1;
		n >>= 1;
		m >>= 1;
	}
	return (flip);
}
