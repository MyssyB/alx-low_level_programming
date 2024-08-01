#include <unistd.h>

/**
 * _putchar -  writes the character c to stdout
 * @c: the character to print
 *
 * Return: on success 1.
 * On erroor, -1, is returned, and errno is set appropraitely.
 */
int _puthcar(char c)
{
	return (write(1, &c, 1));
}
