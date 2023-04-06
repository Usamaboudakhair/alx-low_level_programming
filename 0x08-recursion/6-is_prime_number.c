#include "main.h"
/**
 * is_prime - recursively the input from is_prime_number
 *@m: iterator
 *@n:input number
 * Return: 1 if n is a prime, else return 0 otherwise.
 */

int is_prime(unsigned int n, unsigned int m)
{
	if (m * m > n)
	{
		return (1);
	}
	if (n % m == 0 || n < 2)
	{
		return (0);
	}
	return (is_prime(n, m + 1));
}
/**
 * is_prime_number -  the number is a prime number
 *@n: input number.
 * Return: 1 if n is a prime, else return 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (is_prime(n, 2));
}
