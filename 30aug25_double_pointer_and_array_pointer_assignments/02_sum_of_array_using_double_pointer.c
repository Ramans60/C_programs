#include <stdio.h>
int main() 
{
	int x=0;
	int arr[5]={3,2,7,5,4};
	int i,*p,**q;
	printf("Sum of the array :\n");
    	p=arr; 
    	q=&p; 
    	for (i=0; i<5; i++) 
    	{
		x=x+(*(*q+i));
	}
       	printf("total = %d\n",x);
}
