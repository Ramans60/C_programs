#include <stdio.h>
int main()
{
    int i=-5,x,y=0;
    printf("Enter a number:");
    scanf("%d",&x);
    while (x>0)
    {
        y=y*10+(x%2); 
        x=x/2;
    }
    while (y>0)
    {
        printf("%d",y%10); 
        y=y/10;
    }
    printf("\n");
}

