#include <stdio.h>
x,i=1,a=1;
int main()
{
	printf("power of the number\nEnter a number : ");
        scanf("%d",&x);
	fun();
	printf("fact = %d\n",a);
}
fun()
{
	a=i*i;
	i++;
	if (i<=x)
	{
		fun();
	}
}



