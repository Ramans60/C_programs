#include <stdio.h>
int main()
{
	float a=0,j=0;
	int i=1,x;
	printf("1+1/2+1/3+...n\n Enter a number:");
	scanf("%d",&x);
	while (i<=x)
	{
		++j;
		a=(1/j)+a;
		printf("%f %d\n",a ,i);
		i++;
	}
}
		
