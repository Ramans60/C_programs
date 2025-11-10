#include <stdio.h>
void fun(int *);
int main()
{
	int arr[5]={3,2,7,5,4},k;
	int i,*ptr;
	ptr = arr;
	fun(&ptr[0]);
}
void fun(int *ptr)
{
	int i;
	printf("Original order of the array : ");
	for(i=0; i<5; i++)
	{
		printf("%u ",*(ptr+i));
	}
	printf("Reverse order of the array : ");
	for(i=4; i>-1; i--)
	{
		printf("%u ",*(ptr+i));
	}
	printf("\n ");
}
