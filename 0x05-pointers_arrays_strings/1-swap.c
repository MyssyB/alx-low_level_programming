#include "main.h"
/**
 * swap_int  - swaps the value of 2 integers.
 * @a - first number to be swaped.
 * @b - second number to be swaped.
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
