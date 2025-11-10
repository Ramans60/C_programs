#include <stdio.h>
int main()
{
	int i=1,x;
	printf("EVEN NUMBERS          Enter a number: ");
	scanf("%d",&x);
	while (i<=x)
	{
		printf("%d\n",++i);
		i++;
	}
}
