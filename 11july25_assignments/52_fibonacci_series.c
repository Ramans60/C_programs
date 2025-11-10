#include <stdio.h>
int main()
{
	int i=1,x,y,a=0,j=0,b=1,c=0,z=0;
	printf("FIBANACII SERIES \n Enter a number:");
	scanf("%d",&x);
	while (i<=x)
	{
		if (x>c)
		{
			c=a+b;  
                	a=b;  
                	b=c;  
			printf("%d ",c);
		}
		i++;
	}
}

