#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers, starting with 1 and 2
 * @void: void
 * Return: 0
 */
int main(void)
{
	long pri = 1, sec = 2, sum;

	printf("1, 2");
	while (sum < 20365011073)
	{
		sum = pri + sec;
		printf(", %lu", sum);
		pri = sec;
		sec = sum;
	}
	printf("\n");
	return (0);
}
