#include <stdio.h>
int main()
{
    int a,i=1,x=1,c=0,j=0,y,b=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    while(x<=a)
    {
	    y=x;
	    i=1,j=0;
	    while (i<=x)
	    {
		    if (y%i==0)
		    {
		    ++j;
		    }
		    i++;
	    }
	    if (j==2)
		    printf("prime number : %d Sum : %d\n",y,(b=b+y));
	    x++;
    }
}




