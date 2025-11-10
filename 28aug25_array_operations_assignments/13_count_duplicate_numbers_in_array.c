#include <stdio.h>
int main()
{
	int i,j,k,l=0,m=0;
	int arr[15]={1,2,3,4,5,6,7,8,9,1,2,3,4,5,1};
	for (i=0; i<15; i++)
	{
		k=0;
		for (j=0; j<i; j++)
		{
			if(arr[i]==arr[j])
				break;
		}
		if(i!=j)
			continue;
		for (j=0 ;j<15 ;j++)
		{
			if (arr[i]==arr[j])
			{
				++k;
			}

		}
		if(k>1)
			m=m+k;

	}
	printf("count of duplicate number is = %d\n",m);
}
