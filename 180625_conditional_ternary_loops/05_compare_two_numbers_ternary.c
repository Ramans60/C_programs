#include <stdio.h>
int main()
{
	int x,y,z;
	scanf("%d%d",&x,&y);
	x>y ? printf("x is greater than y\n") : x<y ? printf("x is lesser than y\n") : printf("x is equal to y");
}

