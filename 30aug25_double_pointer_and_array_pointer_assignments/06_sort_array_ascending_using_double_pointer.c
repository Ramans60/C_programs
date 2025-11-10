#include <stdio.h>
int main()
{
	int arr[15]={2,15,10,16,12,11,8,7,9,14,6,13,5,4,1};
	int i,j,*p,**q,k,x;
	p=arr;
	q=&p;
	printf("Acending of the number \n");
	for (i=0; i<15; i++)
	{
		for(j=i+1; j<15; j++)
		{
			if(*(*q+i)>*(*q+j))
			{
				x=*(*q+i);
				*(*q+i)=*(*q+j);
				(*(*q+j))=x;
			}
		}
	}
	for(i=0; i<15; i++)
	{
		printf("%d ",*(*q+i));
	}
}
