#include <stdio.h>
void fun(float *a, float );
int main()
{
	float x,n,k=1;
	printf("area of circle\nenter radius r:");
	scanf("%f",&x);
	printf("%f\n",x);
	fun(&x,k);
	printf("%f\n",x);
}
void fun(float *a, float z)
{
	float i=1;
	i=*a;
	z=2*i*3.14;
	*a=z;
}

