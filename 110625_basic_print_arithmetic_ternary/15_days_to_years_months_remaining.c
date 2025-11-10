#include <stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("input no.of days:\n ");
	scanf("%d",&a);
	b=a/365;
	c=a%365;
	d=c/30;
	e=((b*-365)+(d*-30))+a;
	printf("total years:%d\n",b);
	printf("remaining months:%d\n",d);
	printf("remaining years:%d\n",e);
}

