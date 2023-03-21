#include "main.h"
#include <ctype.h>
/**
 * _islower - Entry point
 * @c: is the character lowercase
 * Return: 1 char  is lowercase,0 otherwise
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
