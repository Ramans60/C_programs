#include <stdio.h>
int main()
{
	int arr[5]={3,2,7,5,4};
	int i,x,j;
	printf("Original order of the array\n");
	for (i=0; i<5; i++)
		printf("%d ",*(arr+i));
	printf("\n");
	printf("Reverse order of the array\n");
	for (i=4; i>-1; i--)
		printf("%d ",*(arr+i));
	printf("\n");
}		
