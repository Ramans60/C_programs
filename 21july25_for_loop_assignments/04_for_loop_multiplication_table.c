#include <stdio.h>
int main()
{
	int i,x,y;
	printf("Tables\n");
	printf("Enterx ending number:");
	scanf("%d",&x);
	y=x;
	for(i=1;i<=10;y=++i*x)

	{
		printf("%dx%d=%d\n",i,x,y);
	}
}






