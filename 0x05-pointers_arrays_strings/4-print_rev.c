#include "main.h"

/**
 * print_rev - prints a string in revserse.
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int count = 0;

	while (*s)
	{
		s++;
		count++;
	}

	while (count)
	{
		s--;
		putchar(*s);
		count--;
	}
	putchar('\n');
}
