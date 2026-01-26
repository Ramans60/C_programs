#include <stdio.h>
#include <stdlib.h>
int main(int argv, char *argc[ ])
{
	int x,y,i;
	char a;
	a=argc[2][0];
	x=atoi(argc[1]);
	y=atoi(argc[3]);
	if(a == '+')
	{
		printf("Addition - %d\n",x+y);
	}
	else if(a == '-')
	{
		printf("Subtraction - %d\n",x-y);
	}
	else if(a == '*')
	{
		printf("Multiplication - %d\n",x*y);
	}
	else if(a == '/')
	{
		printf("Division - %d\n",x/y);
	}
}
