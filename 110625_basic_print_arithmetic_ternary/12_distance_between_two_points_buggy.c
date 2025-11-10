#include <stdio.h>
#include <math.h>
int main()
{
	float x1,y1,x2,y2,z,a,n;
	printf("input x1:\n");
	scanf("%f",&x1);
	printf("input y1:\n");	
	scanf("%f",&y1);
	printf("input x2:\n");
        scanf("%f",&x2);
        printf("input y2:\n");
        scanf("%f",&y2);
	z=((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	n=z/2;
	a=(a+n/a)/2;
	printf("distance between two points:%f\n",a);
}


