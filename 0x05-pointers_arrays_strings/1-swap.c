#include "main.h"
/**
 * swap_int  - swaps the value of 2 integers a and b.
 * @a: first integer to be swapped with the integer b.
 * @b: second integer to be swapped with the interger a.
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
