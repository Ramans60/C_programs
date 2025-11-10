#include <stdio.h>
int main()
{
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	x==y&&y==z ? printf("values are equal\n"):( x==y&&y==x ? printf("x is equal to y\n"): x==z&&z==x ? printf("x is equal to z\n"):y==z&&z==y ? printf("y is equal to z\n"): printf("values not equal\n"), x>y&&x>z ?printf("x is greater than y&z\n"):y>x&&y>z ? printf("y is greater than x&z\n"):z>x&&z>y ? printf("z is greater than x&y\n"):printf("above two values greater and equal\n"),x<y&&x<z ? printf("x is lesser than y&z\n"):y<x&&y<z ? printf("y is lesser than x&&z\n"):z<x&&z<y ? printf("z is lesser than x&y\n"):printf("above two values are lesser and equal\n"));
}
