#include <stdio.h>
int main()
{
    int i=15,x,y=0;
    printf("DECIMAL TO BINARY\nEnter a number:");
    scanf("%d",&x);
    while (x!=0)
    {
        y =x%2;
	x=x/2;
	printf("%d",y);
    }
}
