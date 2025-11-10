#include <stdio.h>
int main()
{
	int a1,b1,a2,b2;
	printf("item 1 weight:\n");
	scanf("%d",&a1);
	printf("No.of item1:\n");
        scanf("%d",&a2);
        printf("item 2 weight:\n");
        scanf("%d",&b1);
	printf("No. of item2:\n");
        scanf("%d",&b2);
	float x,y,z;
	x=(a1*a2)+(b1*b2);
	y=a2+b2;
	z=x/y;
	printf("average value:%f \n",z);
}
