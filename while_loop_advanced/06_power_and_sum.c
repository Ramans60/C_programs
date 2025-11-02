#include <stdio.h>
int main()
{
	int x,n,z=1,i,a=0;
	i=1;
	printf("x^n\n");
	printf("Enter the value x:");
	scanf("%d",&x);
	printf("Enter the power value n:");
	scanf("%d",&n);
	while (i<=n)
	{
		z=z*x;
		a=a+z;
		i++;
	}
	printf("%d\n",z);
	printf("%d\n",a);
}

