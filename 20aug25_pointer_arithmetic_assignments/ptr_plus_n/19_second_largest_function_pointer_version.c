#include <stdio.h>
void fun(int *);
int main()
{
	int arr[5]={3,2,7,5,4},k;
	printf("// Second Largest element //\n");
	int *ptr;
	ptr = arr;
	fun(&ptr[0]);
}
void fun(int *ptr)
{
	int i;
	int first = *(ptr+0),second=*(ptr+0);
	for(i=0; i<5; i++)
	{
		if(*(ptr+i)>first)
		{
			second=first;
			first=*(ptr+i);
		}
		else if (*(ptr+i)>second&&*(ptr+i)<first)
		{
			second=*(ptr+i);
		}
	}
	printf("Second Largest element = %u \n",second);
}


