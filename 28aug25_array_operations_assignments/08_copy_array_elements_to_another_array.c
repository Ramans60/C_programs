#include <stdio.h>
int main()
{
	int i;
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int arr1[0];
	for (i=0; i<10; i++)
	{
		arr1[i]=arr[i];
	}
	for (i=0; i<10; i++)
		printf("%d \n ",arr1[i]);
}

