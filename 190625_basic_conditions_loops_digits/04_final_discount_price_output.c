#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	if (x>9)
		printf("you have received 10 percent Discount now,your discount price is:%d\n",x*100-(x*100/10));
	if (x<10&&0<x) 
		printf("actual price %d\n",x*100);
	if (x<1)
		printf("invalid product\n");
}

