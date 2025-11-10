#include <stdio.h>
int main()
{
	int i,j,k=0,l;
	int arr[5]={5,98,2,99,5};
	int *ptr;
	ptr=&arr;
	k=*(ptr+0),l=*(ptr+0);
	for (i=0; i<5; i++)
	{
		if (*(ptr+i)>k)
		{
			k=*(ptr+i);
		}
	}
	for (i=0; i<5; i++)
	{
		if (*(ptr+i)<k)
		{
			l=*(ptr+i);
		}
	}
	printf("%d  %d\n",k,l);
}
