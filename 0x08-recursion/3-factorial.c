#include "holberton.h"
/**
* factorial - returns the factorial of a given number
* @n: number for value
*
* Return: -1 if n is lower than 0, 0 if n is 1, and n > 1 return factorial
*
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (n);

	if (n > 1)
		return (n * factorial(n - 1));
	return (0);
}
