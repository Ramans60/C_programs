#include <stdio.h>
int main()
{
	int i,j,k,x,y,z;
	printf("Right rotate\nEnter a number:");
	scanf("%d",&x);
	int arr[5]={1,2,3,4,5};
	for (i=0; i<5; i++)
	{
		for(j=i+1; j<5; j++)
		{
			x=arr[i];
			arr[i]=arr[j];
			arr[i]=x;
		}
	}
	for (i=0; i<5; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
