#include "main.h"

/**
 * _strcpy - copies the string pointed to by scr, including \0
 * @src: pointer.
 * @dest: pointer.
 * Return: the poiunter to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, length;

	for (length = 0; src[length] != '\0'; length++)
	{
	}

	for (i = 0; i <= length; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
