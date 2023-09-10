#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string there are digit
 * @str: array string
 *
 * Return: Always 0 (Success).
 */
int check_num(char *str)
{
	/*declaring variables*/
	unsigned int count;

	count = 0;

	while (count < strlen(str)) /*this code counts the string*/
	{
		if (!isdigit(str[count]))/*checks if the string is a digit*/
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/**
 * main - print the name of the program
 * @argc: count arguments
 * @argv: Arguments themselves.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;

	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d'n", sum);
	return (0);
}
