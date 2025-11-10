#include <stdio.h>
int main()
{
	int i;
	int arr[5]={3,2,7,5,4};
	arr[2]=8;
	for(i=0; i<5; i++)
	{
		printf("%d ",arr[i]);
	}
}
