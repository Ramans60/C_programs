#include <stdio.h>
int main()
{
	int i,x,a,b=0;
	printf("Digits Counting    Enter a number:");
	scanf("%d",&x);
	while (x!=0)
	{
		a=x%10;
		x=x/10;
		++b;
	}
		printf("no.digits: %d\n",b);
}

