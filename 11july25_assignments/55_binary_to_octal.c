#include <stdio.h>
int main()
{
	int x,y,z=1,a,b=0,i=-1,j=0;
	printf("BINARY TO OCTAL\n");
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
			}
			b=b+z;
		}
	}
	printf("octal value =%o\n",b);
}


