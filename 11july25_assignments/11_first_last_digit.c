#include <stdio.h>
int main()
{
	int x,y,z,i=0,b=0,a;
	printf("Finding 1st & last digit\n  Enter a number: ");
	scanf("%d",&x);
	while (x!=0)
	{
		y=x%10;
		++i;
		if (i==1)
			(z=y);

		x=x/10;
	}
	printf("First digit: %d\n",y);
	printf("Last digit: %d\n",z);

}
