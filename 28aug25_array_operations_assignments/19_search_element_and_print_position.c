#include <stdio.h>
int main()
{
	int i,j=0,x;
	printf("Enter a number to search : ");
	int arr[10]={1,2,3,4,6,7,8,6,5,53};
	scanf("%d",&x);
	for (i=0; i<10; i++)
	{
		++j;
		if (arr[i]==x)
		{
			printf("The number in the array\nPosition of the array is = %d",j);
		}
	}
}
