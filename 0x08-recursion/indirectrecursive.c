#include <stdio.h>
#include <stdlib.h>
/**
 * write a programme that prints numbers from 1 to 10 in such a way that when number is odd, add 1, and when the number is even, subtract 1.
 */
void odd(int n)
{
	if(n <= 10)
	{
		printf("%d", n+1);
		n++;
		even();
	}
	return;
}

void even(int n)
{
	if(n <= 10)
	{
		printf("%d", n-1);
		n++;
		odd();
	}
	return;
}
int main(void)
{
	int n = 1;
	printf("%d" ,n);
	even(n);
	odd(n);

	return (0);
}
