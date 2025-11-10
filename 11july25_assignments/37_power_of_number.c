#include <stdio.h>
int main()
{
	int i=1,x,y=0,a=1,n;
	printf("POWER OF THE NUMBER 'X^n' \n Enter a number X :");
	scanf("%d",&x);
	printf("Enter a number n:");
	scanf("%d",&n);
	while (i<=n)
	{
		a=x*a;
		i++;
	}
	printf("X^n=%d^%d=%d\n",x,n,a);
}

