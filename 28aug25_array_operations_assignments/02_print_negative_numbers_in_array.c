#include <stdio.h>
int main()
{
	int i; //Negative number printing
	int arr[8]={-1,0,2,-5,4,-7,5,-8};
	for (i=0; i<8; i++)
	{
		if(arr[i]<0)
			printf("%d ",arr[i]);
	}
	printf("\n");
}
