#include <stdio.h>
void fun(float *, float *, float *, float );
int main()
{
	float x,y,z,n,k=1;
	printf("Quatertic equation\nx=−b±sqrt(b^2−4ac)/2a\nenter a number a:");
	scanf("%f",&x);
	printf("enter a number b:");
	scanf("%f",&y);
	printf("enter a number b:");
	scanf("%f",&z);
	printf("%f %f %f\n",x,y,z);
	fun(&x,&y,&z,k);
	printf("%f %f %f\n",x,y,z);
}
void fun(float *a, float *b, float *c, float k)
{
	float n=1,j,l,m,x;
	n=*b**b;
	j=-4**a**c;
	l=2**a;
	m=n-j;
	x=m;
	for(int i = 0; i < 10; i++)
	{
		 x = 0.5 * (x + n / x);
	}
	printf("%f\n",x);
}
