#include <stdio.h>
int main()
{
	int i,j,k,x;
	printf("SELECTION SORT\n");
	int a[5]={3,2,7,5,4};//SELECTION SORT
	for(i=0; i<5; i++)
	{
		for(j=i+1; j<5; j++)
		{
			if (a[i]>a[j]) 
			{
				x=a[i];
                                a[i]=a[j];
                                a[j]=x;
			}
		}
	}
	for (i=0; i<5; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
