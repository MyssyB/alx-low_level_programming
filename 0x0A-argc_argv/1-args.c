#include <stdio.h>
#include "main.h"
/**
 * main - prints the number if arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argv; /*Ignore*/
	printf("%d\n", argc - 1);
	return (0);
}
