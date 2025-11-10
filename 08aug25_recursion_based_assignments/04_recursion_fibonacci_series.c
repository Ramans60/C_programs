#include <stdio.h>
x,i=1,a=0,b=1,c=0;
int main()
{
	printf("fibanocci series\nEnter a number : ");
        scanf("%d",&x);
	fun();
}
fun()
{
	printf("%d  ",a);
	i++;
	a=a+b;
	b=a-b;
	if (i<=x)
	{
		fun();
	}
}


