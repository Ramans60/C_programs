#include <stdio.h>
int main()
{
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	x==y&&y==z ? printf("values are equal\n"):( x==y&&y==x ? printf("x is equal to y\n"):y==z&&z==y? printf("y equal to z\n"): x==z&&z==x ? printf("x is equal to z\n"):printf("values are different\n"), x>y&&x>z ? printf("x is greater than y&z\n"):y>x&&y>z ? printf("y is greater than x&z\n"):z>x&&z>y ? printf("z is greater than x&y\n") : printf("none"),x>y? printf("x is greater than y\n"):x>z ? printf("x is greater than z\n"):printf("x is lesser\n"),y>x ? printf("y is greater than x\n"):y>z ? printf("y is greater than z\n"):printf("y is lesser\n"),z>x ? printf("z is greater than x\n"):z>y ? printf("z is greater than y\n"):printf("z is lesser\n"));
}
