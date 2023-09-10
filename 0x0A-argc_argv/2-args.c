#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all the argumetns it receives.
 * @argc: number of arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: Always 0 (success).
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
