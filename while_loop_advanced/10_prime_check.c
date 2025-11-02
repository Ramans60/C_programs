#include <stdio.h>
int main()
{
    int a,i=2,c=1;
    printf("Enter a number: ");
    scanf("%d",&a);
    if (a<=1)
        c=0;
    else
    {
        while (i*i<=a) 
	{
            if (a%i==0)
                c=0;
	    i++;
        }
    }
    if (c==1)
        printf("%d is a prime number.\n",a);
    else
        printf("%d is not a prime number.\n",a);
}

