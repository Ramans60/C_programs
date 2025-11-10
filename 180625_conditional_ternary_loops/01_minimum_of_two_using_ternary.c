#include <stdio.h>
int main()
{
	int x,y,a;
	scanf("%d%d",&x,&y);
	a=x<y?x:y;
	printf("%d %d %d\n",x,y,a);
}

