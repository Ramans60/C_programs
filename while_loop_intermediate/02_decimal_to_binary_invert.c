#include <stdio.h>
int main()
{
	int i=1,x,y,a,z,j,c=0;
	printf("Enter a number:\n");
	scanf("%d",&x);
	x=y;
	while(x!=0)
	{
		y=y/2;
		++c;
	}
		
	while(i<=c)
	{
		a=x%2;
		x=x/2;
		if (a==0)
			printf("%d",++a);
		else if (a==1)
			printf("%d",--a);
		c++;
	}
}
