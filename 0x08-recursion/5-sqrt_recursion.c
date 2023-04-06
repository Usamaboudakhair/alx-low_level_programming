#include "main.h"

/**
 * power_fonction - helper function for _sqrt_recursion
 * @n: input number
 * @m: iterator
 * Return: square root of n or -1 if it doesn't have a natural square root
 */

int power_fonction(int n, int m)
{
	if (m * m == n)
		return (m);
	else if (m * m > n)
		return (-1);
	return (power_fonction(n, m + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (power_fonction(n, 1));
}
