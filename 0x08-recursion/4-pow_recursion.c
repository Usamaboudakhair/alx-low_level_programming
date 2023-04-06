#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - the value of x raised to the power of y
 *@x: the value of raised
 *@y: the value of power
 * Return: the value final.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (_pow_recursion(x, y - 1) * x);
	}
}
