#include <stdio.h>
#include <stdlib.h>

void main()
{
	//example of predefined macros
	printf("THis is a line number: %d\n", __LINE__);
	printf("This is the name of this file: %s\n", __FILE__);
	printf("This is the current date: %s\n", __DATE__);
	printf("Current Time is: %s\n", __TIME__);
	printf("compilation usccess: %d\n", __STDC__);
}
