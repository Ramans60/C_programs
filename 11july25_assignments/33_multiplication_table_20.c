#include <stdio.h>
int main()
{
	int i=1,j=0,x,a;
	printf("MULTIPLICATION TABLE\n Enter a number: ");
	scanf("%d",&x);
	while (i<=20)
	{
		printf("%d x %d = %d\n",(++j),x,(x*i));
		i++;
	}
}
