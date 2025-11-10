#include <stdio.h>
void fun(int *);
int main()
{
	int arr[5]={3,2,7,5,4},k,x;
	int i,*ptr;
	ptr = arr;
	k=*ptr;
	fun(&ptr[0]);
}
void fun(int *ptr)
{
	int i,k,x;
	printf("Enter a number wants to search by its position : ");
	scanf("%d",&x);
	for(i=0; i<5; i++)
	{
		k=*(ptr+x);
	}
	printf("index = %d element was = %u \n",x,k);
}
