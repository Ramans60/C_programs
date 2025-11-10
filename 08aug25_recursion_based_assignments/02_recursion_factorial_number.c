#include <stdio.h>
x,i=1,a=1;
int main()
{
	printf("factorial\nEnter a number : ");
        scanf("%d",&x);
	fun();
	printf("fact = %d\n",a);
}
fun()
{
	a=a*i;
	i++;
	if (i<=x)
	{
		fun();
	}
}


