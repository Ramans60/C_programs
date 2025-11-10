#include <stdio.h>
int main()
{
	int i,x,j=0;
	printf("Delete a number using the number's position\nEnter a number :");
	int arr[5]={3,2,7,5,4};
	scanf("%d",&x);
	int arr1[0];
	for(i=0; i<5; i++)
	{
		if (i!=x)
		{
			++j;
			arr1[j]=arr[i];
			printf("%d ",arr[i]);
		}
	}
}
