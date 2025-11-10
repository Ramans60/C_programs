#include <stdio.h>
void fun(int *);
int main()
{
	int arr[5]={3,2,7,5,4};
	int i,*ptr;
	ptr=arr;
	fun(&ptr[0]);
}
void fun(int *ptr)
{
	int i,k;
	k=*ptr;
	for (i=0; i<5; i++)
	{
		if (*(ptr+i) < k)
			k= *(ptr+i);
	}
	printf("Smallest element = %d\n",k);
}
