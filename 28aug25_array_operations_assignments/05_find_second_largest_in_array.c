#include <stdio.h>
int main()
{
	int i;
	int arr[5]={5,2,3,4,6};
	int x=arr[0];
	int y=arr[0];
	for(i=0; i<5; i++)
	{
		if(arr[i]>x)
			x=arr[i];
	}
	for(i=0; i<5; i++)
	{
		if((arr[i] > y) && (arr[i] =! x))
			y=arr[i];
	}
	printf("Second largest element in array is %d\n",y);
}
