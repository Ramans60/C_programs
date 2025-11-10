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
	scanf("%d",&x);
	for (i=0 ; i<5 ; i++)
	{
		y=a[x];
	}
		printf("%d\n",y);
}

