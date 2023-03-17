#include <stdlib.h>
#include <time.h>
/* print the status of a variable */

/**
 * main - Entry point
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n>0) printf("%d is is positive");
	else if(n==0) printf("%d is zero");
	else printf("%d is negative");
	return (0);
}
