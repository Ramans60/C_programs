#include <stdio.h>
int main()
{
    int x,y,i=1,a,j=1,k=1,c=0,l=0,b;
    printf("FINDING PRIME FACTORS OF THE GIVEN NUMBER \nEnter a number: ");
    scanf("%d",&x);
    while (i<=x)
    {
        if (x%i==0) 
        {
            l=0;
            j=1;
            while (j<=i)
            {
                if (i%j==0)
                {
                    ++l;
                }
                j++;
            }

            if (l==2) 
            {
                printf("prime factor: %d\n",i);
            }
        }
        i++;
    }
}
