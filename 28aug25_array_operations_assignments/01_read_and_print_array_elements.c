#include <stdio.h>
int main()
{
	int i,j=0; //Read and print elements of array
	int arr[5];
	for(i=0; i<5; i++)
	{
		scanf("%d",&arr[i]);
	}
	while (j<5)
	{
		printf("%d ",arr[j]);
		j++;
	}
	printf("\n");
}
