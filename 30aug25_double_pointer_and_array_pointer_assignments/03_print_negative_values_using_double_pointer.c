#include <stdio.h>
int main()
{
	int i,j,x;
	int arr[6]={3,-2,7,-5,9,-4};
	int *p,**q;
	p=arr;
	q=&p;
	for (i=0; i<6; i++)
	{
		if (*(*q+i)<0)
		{
			printf("%d  ",*(*q+i));
		}
	}
}
