#include <stdio.h>
int main()
{
	int i,x,y;
	printf("Even numbers\n");
	printf("Enter ending number:");
	scanf("%d",&y);
	for(x=2;x<=y;x=x+2)
	{
		printf("%d\n",x);
	}
}



