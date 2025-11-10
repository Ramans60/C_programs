#include <stdio.h>
int main()
{
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	x>y ? printf("x is greater than y\n") : x<y ? printf("x is lesser than y\n") : x>z ? printf("x is greater than z\n"): x<z ? printf("x is less than z\n"):
	y>x ? printf("y is greater than x\n") : y<x ? printf("y is lesser than x\n") : x>z ? printf("y is greater than z\n") : x<z ?printf("y is less than z\n"):
	x>y ? printf("x is greater than y\n") : x<y ? printf("x is lesser than y\n") : x>z  ? printf("x is greater than z\n") : printf("z is less than y\n");
}
