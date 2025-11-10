#include <stdio.h>
int main()
{
    int i=-5,x,y;
    printf("Enter a number:");
    scanf("%d",&x);
    while (x>0)
    {
        y=(x%2);
	if(y==0)
		++y;
	else if (y==1)
		--y;
	x=x/2;
	printf("%d %d\n",y,x);
    }
}

