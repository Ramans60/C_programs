#include <stdio.h>
int main()
{
	char x=122,y,i=97,a=90,b=65;
	int j=1,c=1;
	printf("Lower case alphabets\n");
	while (i<=x)
	{
		printf("%d   %c\n",j,i);
		i++;
		j++;
	}
	printf("Upper case alphabets\n");
	while (b<=a)
	{
		printf("%d   %c\n",c,b);
		b++;
		c++;
	}
}
