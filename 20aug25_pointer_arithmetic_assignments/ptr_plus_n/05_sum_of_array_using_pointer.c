#include <stdio.h>
void fun(int *, int );
int main()
{
	int arr[5]={3,2,7,5,4},k;
	int i,*ptr;
	ptr = arr;
	k=0;
	for(i=0; i<5; i++)
	{
		k=k+*(ptr+i);
	}
	printf("Total = %u \n",k);
}

