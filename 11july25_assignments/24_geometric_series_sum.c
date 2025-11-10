#include <stdio.h>
int main()
{
	int i=1,x,y=0,a=1,n;
	printf("1+x+x^2+x^3+x^4+...x^n\n Enter a number X :");
	scanf("%d",&x);
	printf("Enter a number n:");
	scanf("%d",&n);
	while (i<=n)
	{
		a=x*a;
		y=y+a;
		i++;
	}
	printf("Geometric series: %d\n",(1+y));
}
