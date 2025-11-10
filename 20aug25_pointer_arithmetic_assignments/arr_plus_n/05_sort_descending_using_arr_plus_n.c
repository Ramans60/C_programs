#include <stdio.h>
int main()
{
	int arr[5]={3,2,7,5,4};
	int i,j,k,x;
	for (i=0; i<5; i++)
	{
		for (j=i+1; j<5; j++)
		{
			if (*(arr+i)< *(arr+j))
			{
				x=(*(arr+i));
				*(arr+i)=*(arr+j);
				*(arr+j)=x;
			}
		}
	}
	for(i=0; i<5; i++)
	{
		printf("%d ",*(arr+i));
	}
}
