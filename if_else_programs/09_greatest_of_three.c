#include <stdio.h>
int main()
{
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	if(x==y&&y==z)
		printf("values are same\n");
	else if (x>y&&x>z)
		printf("x is greater than y&z\n");
	else if (y>x&&y>z)
		printf("y is greater than x&z\n");
	else if (z>x&&z>y)
		printf("z is greater than x&y\n");
	else if (x==y&&y==x)
		printf("x&y values same\n");
	else if (y==z&&z==y)
		printf("y&z values same\n");
	else if (x>y)
		printf("x is greater than y\n");
	else if (x>z)
		printf("x is greater than z\n");
	else if (y>x)
		printf("y is greater than x\n");
	else if (y>z)
		printf("y is greater than z\n");
	else if (z>x)
		printf("z is greater than x\n");
}




