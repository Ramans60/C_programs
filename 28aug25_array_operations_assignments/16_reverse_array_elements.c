#include <stdio.h>
int main()
{
	int i,j;
	int arr[8]={1,2,3,4,5,6,7,8};
	printf("Normal form of array\n");
	for (i=0; i<8; i++)
		printf("%d ",arr[i]);
	printf("\n");
	printf("Reverse form of array\n");
	for (j=7; j>=0; j--)
		printf("%d ",arr[j]);
	printf("\n");
}

