#include <stdio.h>
int main()
{
	int i,j,k=0;
	int arr[10]={-5,98,-2,98,-5,4,-3,2,5,-8};
	int *ptr;
	printf("Negative values in the array\n");
	ptr=&arr;
	for (i=0; i<10; i++)
	{
		if(*(ptr+i)<0)
		{
			printf("%d ",*(ptr+i));
		}
	}
}
