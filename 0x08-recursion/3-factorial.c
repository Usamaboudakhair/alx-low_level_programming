#include "main.h"
#include <stdio.h>

/**
 * factorial - the factorial of a given number
 *@n: numbere of factorial
 * Return: fact.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n *  factorial(n - 1));
	}
}
