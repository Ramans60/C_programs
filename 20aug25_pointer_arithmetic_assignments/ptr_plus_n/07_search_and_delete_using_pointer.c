#include <stdio.h>
void fun(int *, int );
int main()
{
	int arr[5]={3,2,7,5,4},k,x;
	printf("Searching and delete a number in the array\n");
	int i,*ptr;
	ptr = arr;
	k=*ptr;
	printf("Enter a number wants to search Delete a number by using its position : ");
	scanf("%d",&x);
	for(i=0; i<5; i++)
	{
		if (*(ptr+i)!=*(ptr+x))
		{
			printf("%u \n",*(ptr+i));
		}
	}
}
