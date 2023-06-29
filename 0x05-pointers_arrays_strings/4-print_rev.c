#include "main.h"

/**
 * print_rev - prints a string in revserse.
 * @s: string to be printed in reverse.
 *
 * Return: Nothing on Success
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
		_putchar(*s);
		count--;
	}
	_putchar('\n');
}
