#include <stdio.h>
void fun(int *a, int *b, int );
int main()
{
	int x,n,k=1;
	printf("x^n\n");
	printf("enter a number x:\n");
	scanf("%d",&x);
	printf("enter a number n:\n");
	scanf("%d",&n);
	printf("%d %d\n",x,n);
	fun(&x,&n,k);
	printf("%d \n",x);
}
void fun(int *a, int *b,int z)
{
	int i=1,c=*a;
	while(i<=*b)
	{
		z=z**a;
		i++;
	}
	*a=z;
}
