#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string with a new line to std output.
 * @str - string to be printed on the new line.
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str)
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
