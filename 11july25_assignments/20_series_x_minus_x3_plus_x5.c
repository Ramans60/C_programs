#include <stdio.h>
int main()
{
	int i=2,x,y,a=1,n,j,k=1;
	printf("x-x^3+x^5+...x^n\n Enter the value of X:");
	scanf("%d",&x);
	y=x;
	printf("Enter the power value n:");
	scanf("%d",&n);
	while (i<n)
	{
		++i;
		j=i;
		while (k<=j)
		{
			a=a*x;
			k++;
		}
		i++;
	}
	printf("%d %d\n",a,(y-a));

}



