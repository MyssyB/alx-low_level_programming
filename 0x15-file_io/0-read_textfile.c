#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - reads a text file and prints it to stdout.
 * Return: 0 if filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	char *buffer;
	ssize_t byte;

	fd = open(filename,O_RDONLY);
	buffer = malloc(sizeof(size_t) * letters);

	if (buffer == NULL)
		return (0);
	byte = read(fd, buffer, letters);
	if (byte == -1)
		return (0);





	
}
