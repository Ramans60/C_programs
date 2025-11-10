#include <stdio.h>
int main()
{
	int i,j,k=0;
	int arr[5]={5,8,2,9,7};
	void *ptr;
	ptr=&arr;
	for (i=0; i<5; i++)
	{
		printf("%p "ptr);
	}
}
