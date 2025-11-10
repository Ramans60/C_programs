#include <stdio.h>
int main()
{
	int arr[5]={3,2,7,5,4};
	int i,j,x;
	printf("to search and delete a number\nBefore deleting a number = ");
	for(i=0; i<5; i++)
		printf("%d ",*(arr+i));
	printf("\nEnter a number = ");
	scanf("%d",&x);
	printf("After deleting the number\n");
	for (j=0; j<5; j++)
	{
		if(x!=*(arr+i))
			printf("%d ",*(arr+i));
	}	
	printf("\n");
}
