#include <stdio.h>
int main()
{
	int i,j,k,l;
	int arr[15]={1,2,3,4,5,6,7,8,9,1,2,3,4,5,1};
	for (i=0; i<15; i++)
	{
		k=0; 
		for (j=0; j<i; j++)
		       	if (arr[i] == arr[j]) 
				break;
		if (j != i) 
			continue;
		for (j=0; j<15; j++)
		{
			if(arr[i]==arr[j])
			{
				l=arr[i];
				++k;
			}
		}
		printf("%d = %d\n",l,k);
	}
}
