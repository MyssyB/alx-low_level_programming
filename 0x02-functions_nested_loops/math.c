#include <stdio.h>

int main(void)
{
	int i;
	i = 10;
	while (i < 10)
	{
		printf("%d", i % 2);
		i++;
	}
}
