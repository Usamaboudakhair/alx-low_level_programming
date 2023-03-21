#include "main.h"
#include <ctype.h>
/**
 * _isalpha - Entry point
 * @c: is the character lowercase
 * Return: 1 char is lowercase or uppercase,0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
