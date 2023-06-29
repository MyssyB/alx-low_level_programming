#include "main.h"

/**
 * _puts - prints a string with a new line to std output.
 *
 * @str: Is the string to be printed on the new line.
 *
 * Return: Nothing on Success
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
