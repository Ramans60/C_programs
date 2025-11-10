#include <stdio.h>
int main()
{
	int arr[15]={1,2,3,4,5,1,2,3,6,7,8,9,1,2,3};
	int i,j,*p,**q,k;
	p=arr;
	q=&p;
	printf("Frequency of the number \n");
	for (i=0; i<15; i++)
	{
		k=0;
		for(j=0;j<i;j++)
			if(*(*q+i)  ==  *(*q+j))
				break;
		if (j!=i)
			continue;
		for(j=0; j<15; j++)
		{
			if(*(*q+i) == *(*q+j))
				++k;
		}
		printf("element = %d frequency = %d\n",*(*q+i),k);
	}
}
