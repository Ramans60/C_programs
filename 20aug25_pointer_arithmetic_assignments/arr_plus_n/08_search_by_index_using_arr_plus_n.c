#include <stdio.h>
int main()
{
	int arr[5]={3,2,7,5,4};
	int i,j,x;
	printf("search a number using index\nEnter a number = ");
	scanf("%d",&x);
	for (i=0; i<5; i++)
	{
		j=(*(arr+x));
	}
	printf("%d\n",j);
}
