#include <stdio.h>
int main()
{
	int arr[5]={3,2,7,5,4};
	int i,j,x=0;
	for(i=0; i<5; i++)
	{
		x=x+*(arr+i);
	}
	printf("Sum = %d\n",x);
}
