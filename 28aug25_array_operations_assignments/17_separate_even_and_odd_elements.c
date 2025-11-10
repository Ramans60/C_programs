#include <stdio.h>
int main()
{
	int i,j=1,k=1;
	int arr[10]={1,2,3,4,5,6,7,8,9,11};
	int arr1[0],arr2[0];
	for (i=0; i<10; i++)
	{
		if(arr[i]%2==0)
		{
			arr1[j]=arr[i];
			++j;
		}
		else if(arr[i]%2!=0)
		{
			arr2[k]=arr[i];
			++k;
		}
	}
	for(i=1; i<j; i++)
		printf("%d ",arr1[i]);
	printf("\n");
	printf("\n");
	printf("\n");
	for(i=1; i<k; i++)
		printf("%d ",arr2[i]);
}
