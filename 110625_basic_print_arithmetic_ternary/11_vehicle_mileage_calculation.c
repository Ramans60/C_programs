#include <stdio.h>
int main()
{
	float x,y,z;
	printf("input total distance in km:\n");
	scanf("%f",&x);
	printf("input total fuel spent in litres:\n");	
	scanf("%f",&y);
	z=x/y;
	printf("mieleage of your vehicle(km):%f",z);
}

