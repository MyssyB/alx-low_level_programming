#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @: the cahracter to print
 *
 * Return: On success 1.
 * On errot, -1 is returned, and errno is set appropraitely.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
