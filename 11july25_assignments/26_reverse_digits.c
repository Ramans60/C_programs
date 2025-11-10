#include <stdio.h>
int main()
{
	int i,x,y,a;
	printf("\\REVERSE DIGIT PRINT\\\n Enter a number:");
	scanf("%d",&x);
	while (x!=0)
	{
		a=x%10;
		printf("%d",a);
		printf(" ");
		x=x/10;
	}
	printf("\n ");
}
