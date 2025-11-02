#include <stdio.h>
int main()
{
	int i,n;
	i=1;
	float a=1,b=1,y=0,x;
	printf("n/x! , n=1,2,3..n\n");
	printf("Enter a number n:");
	scanf("%d",&n);
	printf("Enter factorial number x:");
	scanf("%f",&x);
	while (i<=n)
	{
		b=b*i;
		a=i/x;
		y=y+a;
		i++;
	}
	printf("%f\n",a);
	printf("sum:%f\n",y);

}
