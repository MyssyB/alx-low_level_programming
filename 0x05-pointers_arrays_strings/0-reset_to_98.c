#include <stdio.h>
#include "main.h"
/**
 * main - writes a function that takes a pointer to an int as parameter
 * Return: Always 0.
 */
void reset_to_98(int *n);

int main(void)
{
	int n;

	n = 98;
	printf("n = %d\n", n);
	reset_to_98(&n);
	printf("n = %d\n", n);
	return (0);
}
