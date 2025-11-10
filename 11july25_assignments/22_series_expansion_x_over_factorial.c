#include <stdio.h>
int main()
{
	int i=1,n;
	float z=1,x,a=0,b=1,c=0;
	printf("1 + x/1! + x^2/2! + x^3/3! + ... + x^n/n!\n Enter a Number X:");
	scanf("%f",&x);
	printf("Enter a number n:");
	scanf("%d",&n);
	while (i<=n)
	{
		b=b*i; //factorial
		z=z*x;
		a=a+z;	//x^n
	        c=z/b+c;
		i++;
	}
	printf("Sum of the series: %f\n",(1+c));
}


