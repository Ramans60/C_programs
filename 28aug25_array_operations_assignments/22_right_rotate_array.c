#include <stdio.h>
int main()
{
	int i,j,k,x,y,z;
	printf("Right rotate\nEnter a number:");
	scanf("%d",&x);
	int arr[5]={1,2,3,4,5};
	for (i=4+x,j=1; i>=0+x,j<=5; i--,j++)
	{
		if (i>=5)
		{
			y=9-i;
			printf("%d ",arr[y]);
		}
		else
		{
			k=i-4;
			z=-(k);
			printf("%d ",arr[z]);
		}
	}
}
