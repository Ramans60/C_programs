#include <stdio.h>
int main()
{
	int i=0,j,x,y,a;
	printf("Sum of '1st & lastdigit'\n  Enter a number:  ");
	scanf("%d",&x);
	while(x!=0)
	{
		a=x%10;
		++i;
		if (i==1)
			y=a;
		x=x/10;
	}
	printf("Sum of 1st&last digit : %d+%d=%d \n",a,y,(a+y));
}


