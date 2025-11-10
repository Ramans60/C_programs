#include <stdio.h>
int main()
{
    int a=1,i=1,x,c=0,j=0,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    y=x;
    a=y;
    while (i<=x)
    {
	    if (y%i==0)
	    {
		    ++j;
	    }
	    i++;
    }
    if (j==2)
	    printf("It is prime number %d \n",y);
    else 
	    printf("It is not prime number%d \n",y);
}


