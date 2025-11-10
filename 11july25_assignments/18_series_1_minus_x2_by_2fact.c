#include <stdio.h>

int main()
{
    int i = 1, n, j, k, l, m = 2;
    float x, z, a = 0, b, c = 1, term;
    int d=-1;
    printf("1-x^2/2!+x^4/4!-...  n \n Enter a number: ");
    scanf("%f",&x);
    printf("Enter a number n: ");
    scanf("%d",&n);
    while (i<n)
    {
        z=1; 
        j=1;
        while (j<=m)
        {
            z=z*x;
            j++;
        }
        b=1;
        l=1;
        while (l<=m)
        {
            b=b*l;
            l++;
        }
        a=z/b;    
        c=c+d*a;
        d=-d; 
        m=m+2; 
        i++;
    }
    printf("Sum of the series: %f\n",c);
}
