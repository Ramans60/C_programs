#include <stdio.h>
void fun(int *);
int main()
{
	int arr[5]={3,2,7,5,4};
	printf("Decending order\n ");
	int *ptr;
	ptr=arr;
	fun(&ptr[0]);
}
void fun(int *ptr)
{
	int i,j,k;
	for (i=0; i<5; i++)
	{
		for(j=i+1; j<5; j++)
		{
			if (*(ptr+i)<*(ptr+j))
			{
				k=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=k;
			}
		}
	}
	for (i=0; i<5; i++)
	{
		printf("%d ",*(ptr+i));
	}
	printf("\n ");
}


