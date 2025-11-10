#include <stdio.h>
int main()
{
	int i,j,k=0;
	int arr[5]={3,2,7,5,4};
	void* ptr=&arr;
	for (i=0; i<5; i++)
	{
		printf("%p \n ",*ptr);
	}
}
