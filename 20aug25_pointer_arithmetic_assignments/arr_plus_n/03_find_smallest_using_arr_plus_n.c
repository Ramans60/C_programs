#include <stdio.h>
int main()
{
	int arr[5]={3,2,7,5,4};
	int i,k=*(arr+0);
	for (i=0; i<5; i++)
	{
		if (*(arr+i)<k)
		{
			k=*(arr+i);
		}
	}
	printf("Smallest element = %d\n",k);
}
