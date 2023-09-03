#include <stdio.h>
#include <string.h>
/**
 * _strlen_recursion - prints the lenght of a string to stdout.
 * @s: is the string to whose length is to be returned.
 * Return: int strlen.
 **/
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
