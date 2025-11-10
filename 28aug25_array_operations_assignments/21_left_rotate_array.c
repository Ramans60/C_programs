#include <stdio.h>
int main()
{
	int i,j,x,y;
	int arr[6]={7,6,3,2,5,4};
	printf("Enter a number to rotate :");
	scanf("%d",&x);
	for (i=0+x; i<6+x; i++)
	{
		if (i>=6)
		{
			y=i-6;
			printf("%d ",arr[y]);
		}
		else 
			printf("%d ",arr[i]);
	}
}
