#include "main.h"

/**
 * get_endianness - checks the endiannes
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int get;
	char *endia;

	get = 1;
	endia = (char *) &get;

	if (*endia)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
