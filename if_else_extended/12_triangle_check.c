#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter A:");
	scanf("%d",&a);
	printf("Enter B:");
	scanf("%d",&b);
	printf("Enter C:");
	scanf("%d",&c);
	if (a+b>c && a+c>b && b+c>a)
		printf("Possible to make triangle\n");
	else 
		printf("Not possible to make triangle\n");
}
