#include <stdio.h>
/**
 * factorial - prints the factorial of a given number
 * @n: number whose factorial is to be returned.
 * Return: n.
 **/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
