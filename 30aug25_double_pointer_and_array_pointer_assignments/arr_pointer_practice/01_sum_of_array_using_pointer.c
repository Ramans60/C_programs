#include <stdio.h>
int main()
{
	int i,j,k=0;
	int arr[5]={5,98,2,98,5};
	int *ptr;
	ptr=&arr;
	for (i=0; i<5; i++)
	{
		k=k+*(ptr+i);
	}
	printf("Total = %d\n",k);
}
