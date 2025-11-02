#include <stdio.h>
int main()
{
	char x;
	printf("enter the speacial char:");
	scanf("%c",&x);
	(x>=58 && x<=64) || (x>=33 && x<=47)|| (x>=91 && x<=96) || (x>=123 && x<=126) ? printf("it is speacial character\n"): printf("invalid char\n");
}
	
