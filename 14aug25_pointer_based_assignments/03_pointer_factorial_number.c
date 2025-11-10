#include <stdio.h>
void fun(int *a, int );
int main()
{
	int x,n,k=1;
	printf("Factorial\nenter a number x:");
	scanf("%d",&x);
	printf(" %d\n",x);
	fun(&x,k);
	printf("%d \n",x);
}
void fun(int *a, int z)
{
	int i=1,c=*a;
	while(i<=*a)
	{
		z=z*i;
		i++;
	}
	*a=z;
}

