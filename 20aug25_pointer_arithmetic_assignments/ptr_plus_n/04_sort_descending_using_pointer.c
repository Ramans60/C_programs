#include <stdio.h>
void fun(int *, int );
int main()
{
	int arr[5]={3,2,7,5,4},k;
	printf("Decending order\n");
	int i,*ptr,j,x;
	ptr = arr;
	k=*ptr;
	for(i=0; i<5; i++)
	{
		for (j=i+1; j<5; j++)
		{
			if(*(ptr+i)<*(ptr+j)) 
			{
				x=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=x;
			}
		}
	}
	for (i=0; i<5 ;i++)
	{
		printf("%d \n",*(ptr+i));
	}
}
