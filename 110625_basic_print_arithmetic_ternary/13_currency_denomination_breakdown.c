#include <stdio.h>
int main()
{
	int x;
	printf("input the total amount:\n");
	scanf("%d",&x);
	int a,b,c,d,e,f;
	a=x/100;
	b=x % 100;
	c=b/50;
	d=b % 50;
	e=d/20;
	f=d % 20;
	printf("no.of 100s:%d \n",a);
	printf("no.of 50s:%d\n",c);
	printf("no.of 20s:%d\n",e);
	printf("exes amount:%d\n",f);
}

