#include <stdio.h>
int main()
{
	int i;
	int arr[5]={0,2,9,8,7};
	int x=arr[0],y=arr[0];
	for (i=0; i<5; i++)
	{
		if(arr[i]>x)
			x=arr[i];
		else if (arr[i]<y)
			y=arr[i];
	}
	printf("Largest element = %d\n",x);
	printf("Smallest element = %d\n",y);
}
