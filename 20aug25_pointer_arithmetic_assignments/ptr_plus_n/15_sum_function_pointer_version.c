#include <stdio.h>
void fun(int *);
int main()
{
	int arr[5]={3,2,7,5,4},k;
	int *ptr;
	ptr = arr;
	fun(&ptr[0]);
}
void fun(int *ptr)
{
	int k=0,i;
	for(i=0; i<5; i++)
	{
		k=k+*(ptr+i);
	}
	printf("Total = %u \n",k);
}
