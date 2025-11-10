#include <stdio.h>
int main()
{
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	x==y==z ? printf("values are equal\n") :( x==y ? printf("x is equal to y\n") : y==z ? printf("y is equal to z\n") :x==z ? printf("x is equal to z\n") : printf("values not equal\n") ,  x>y&&x>z ? printf("x is greater than y&z\n") : y>x&&y>z ? printf("y is greater than x&z\n") : z>x&&z>y ? printf("z is greater than x&y\n") : printf("two values same and greater\n") );
}
