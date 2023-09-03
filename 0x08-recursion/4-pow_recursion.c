#include <stdio.h>
#include <math.h>
/**
 * _pow_recursion - returns the calues of x and y raised to the power of y
 * @x: first integer
 * @y: second integer
 * Return: x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
