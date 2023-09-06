#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the name of a program
 * @argc: command line argument
 * @argv: pointer to an array of the command line arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	printf("argc: %d\n", argc);

	printf("argv[0]=%s\n", argv[0]);

	return (0);
}
