#include <stdio.h>
x,i=1;
int main()
{
	printf("Multiplication table\nEnter a number : ");
        scanf("%d",&x);
	fun();
}
fun()
{
	printf("%dx%d=%d\n",i,x,x*i);
	i++;
	if (i<11)
	{
		fun();
	}
}
