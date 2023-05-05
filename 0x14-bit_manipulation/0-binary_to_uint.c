#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint- check the code convert a binary number to an unsignedint
 *@b: is pointing to a string of 0 and 1 chars.
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int binary;
	int xlen, base2;

	if (!b)
	{
		return (0);
	}
	binary = 0;

	xlen = 0;
	while (b[xlen] != '\0')
	{
		xlen++;
	}

	xlen--;
	base2 = 1;
	while (xlen >= 0)
	{
		if (b[xlen] != '0' && b[xlen] != '1')
		{
			return (0);
		}
		if (b[xlen] & 1)
		{
			binary += base2;
		}
		xlen--;
		base2 *= 2;
	}
	return (binary);
}
