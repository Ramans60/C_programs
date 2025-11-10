#include <stdio.h>
int main()
{
	int i,k;
	int arr[5]={3,2,7,5,4};
	fun(&arr[0]);
}
fun (int a[ ])
{
	int i,j=0,x,y;
	for (i=4 ; i>-1 ; i--)
	{
		printf("%d\n",a[i]);
	}
}



