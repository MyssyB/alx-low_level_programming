#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments
 * @argc: number of arguments to main
 * @argv: array of pointers to the arguments themselves
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
	(void) argv; /*meaning ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
