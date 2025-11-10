#include <stdio.h>
int main()
{
	int i,j,k;
	int arr[5]={1,2,3,4,5};
	int arr1[5]={6,7,8,9,10};
	int arr2[0];
	for(i=0,j=5; i<5,j<10; i++,j++)
	{
		arr2[i]=arr[i];
		arr2[j]=arr1[i];
	}
	for (i=0; i<10; i++)
		printf("%d ",arr2[i]);
}
