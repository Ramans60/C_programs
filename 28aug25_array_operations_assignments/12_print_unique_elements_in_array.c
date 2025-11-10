#include <stdio.h>
int main()
{
	int i,j,k;
	int arr[15]={1,2,3,4,5,6,7,8,9,1,2,3,4,5,1};
	for(i=0; i<15; i++)
	{
		k=0;
		for (j=0; j<15; j++)
		{
			if(arr[i]==arr[j])
				++k;
		}
		if (k<2)
			printf("%d ",arr[i]);
	}
	printf("\n");
}
