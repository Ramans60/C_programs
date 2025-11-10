#include <stdio.h>
int main()
{
	int x,y,z=1,a,b=0,i=-1,j=0;
	printf("Enter binary value: ");
	scanf("%d",&x);
	while (x!=0)
	{
		a=x%10;
		x=x/10;
		i++;
		if (a==1)
		{
			while (j<i)
			{
				z=z*2;
				j++;
				printf("%d\n",z);
			}
			b=b+z;
		}
	}
	printf("%d\n",b);
}

