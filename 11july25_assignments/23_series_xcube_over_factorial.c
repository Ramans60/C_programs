#include <stdio.h>
int main()
{
	int i=1,n,m,j=0,k=1,l=1;
	float z=1,x,a=0,b=1,c=0;
	printf("1 + x/1! + x^3/2! + x^5/3! + ... + x^n/n!\n Enter a Number X:");
	scanf("%f",&x);
	printf("Enter a number n:");
	scanf("%d",&n);
	m=n;
	while (i<=n)
	{
		b=b*l; //factorial
		++j;
		if (j<=m)
		{
			while (k<=j)
			{
				z=z*x;
				k++;
			}
		}
		a=a+z;	//x^n
		c=z/b+c;
		i++;
		i++;
		j++;
		l++;
	}
	printf("Sum of the series: %f\n",(1+c));
}



