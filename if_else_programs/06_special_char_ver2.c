#include <stdio.h>
int main()
{
	char x;
	scanf("%c",&x);
	if(x>=33 && x<=47)
		printf("speacial character\n");
	else if (x>=58 && x<=64)
		printf("speacial character\n");
	else if (x>=91 && x<=95)
		printf("speacial character\n");
	else if (x>=123 && x>=126)
		printf("speacial character\n");
	else 
		printf("invalid\n");
}
