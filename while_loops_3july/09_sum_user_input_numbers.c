#include <stdio.h>
int main()
{
    int i=1,x,y=0;
    printf("Enter a number: ");
    scanf("%d", &x);
    while (i <= x)
    {
        y=y+i;
        i++;
    }
    printf("sum:%d\n",y);
}
