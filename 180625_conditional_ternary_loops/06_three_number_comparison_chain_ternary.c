#include <stdio.h>
int main()
{
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	x>y ? printf("x is greater than y\n") : x<y ? printf("y is greater than x\n") : printf("x is equal to y\n") ,x>z ? printf("x is greater than z\n"): x<z ? printf("z is greater than x\n"): printf("x is equal to z\n");

}

