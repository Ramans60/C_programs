#include <stdio.h>
void fun(int *, int );
int main()
{
	int arr[5]={3,2,7,5,4};
	int i,*ptr,k=*(arr+0);
	for(i=0; i<5; i++)
	{
		if (*(arr+i)>k)
		{
			k=*(arr+i);
		}
	}
	printf("Largest element = %d\n",k);
}
