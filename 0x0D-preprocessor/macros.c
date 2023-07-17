#include <stdio.h>
#include <stdlib.h>
//object like macro
#define PI 3.142
//function like macro
#define Area(r) (PI*(r*r))

void main()
{
	//declaration and initialization of radious
	float radius = 2.5;
	float area =  Area(radius);
	printf("Area of circile is %5.2lf\n", area);
	int radiusInt = 5;

	printf("Area of a circle is %8.2lf", Area(radiusInt));
}
