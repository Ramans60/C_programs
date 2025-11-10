#include <stdio.h>
int main()
{
	int i,j=0,l=0;
	int arr[10]={2,1,4,3,6,7,5,9,11,8};
	for(i=0; i<10; i++)
	{
		if(arr[i]%2==0)
			j++;
		else
			l++;
	}
	printf("Even count is %d\nOdd count is %d\n",j,l);
}

