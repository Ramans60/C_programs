#include <stdio.h>
void fun(int *, int );
int main()
{
	int arr[5]={3,2,7,5,4};
	int i,*ptr;
	for(i=0; i<5; i++)
	{
		printf("%u \n",*(arr+i) );
	}
}
