#include "main.h"
/**
 * _puts_recursion - function like puts();
 * @s: input
 * Return: ALways 0 (success)
 */
void puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
