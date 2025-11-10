#include <stdio.h>
int main()
{
	int i=0,j=0,x,a,b;
	printf("enter a number:");
	scanf("%d",&x);
	while (x!=0)
	{
		a=x%10;
		++i;
		--j;
		if (i==1)
			b=a;
		else if(j<-1)
			printf("%d\n",a);

		x=x/10;
	}
	printf("%d",b);
	printf("%d",a);
}


			
