#include <stdio.h>
int main()
{
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	x==y&&y==z ? printf("values are equal\n"):( (x>y&&x>z ? printf("x is greater than y&z\n") : y>x&&y>z ? printf("y is greater than x&z\n"): z>x&&z>y ? printf("z is greater than x&y\n"):printf("")) , (x==y&&y==x ? printf("x&y are equal\n"):x==z&&z==x ? printf("x&z are equql\n") : y==z&&z==y ? printf("y&z are equal\n") : printf("")) , (x>y ? printf("x is greater than y\n"): x>z ? printf("x is greater than z\n"): printf("")),(y>x ? printf("y is greater than x\n"):y>z ? printf("y is greater than z\n"):printf("")),(z>x ? printf("z is greater than x\n") : z>y? printf("z is greater than y\n"):printf("")),(x<y? printf("x is lesser than y\n"):x<z? printf("x is lesser than z\n"):printf("")),(y<x ? printf("y is lesser than x\n"):y<z ? printf("y is lesser than z\n"):printf("")),(z<x ? printf("z is lesser than x\n"): z<y ? printf("z is lesser than y\n"):printf("greater")),);
}	
