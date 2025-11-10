#include <stdio.h>
int main()
{
	int i,k;
	int arr[5]={3,2,7,5,4};
	fun(&arr[0]);
}
fun (int a[])
{
	int i,k=a[0];
	for (i=0 ; i<5 ; i++)
	{
		if (a[i]<k)
		{
			k=a[i];
		}
	}
	printf("smallest element = %d\n",k);
}

