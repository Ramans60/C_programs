#include <stdio.h>
int main()
{
	int x;
	printf("input the total seconds:\n");
	scanf("%d",&x);
	int a,b,c,d,e,f;
	a=x/3600;
	b=x % 3600;
	c=b/60;
	d=b % 60;
	e=d/60;
	printf("hours:%d \n",a);
	printf("minutes:%d\n",c);
	printf("seconds:%d\n",e);
}


