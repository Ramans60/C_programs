#include <stdio.h>
int main()
{
	char x;
	printf("enter the char value:\n");
	scanf("%c",&x);
	if ((x>=33 && x<=47) || (x>=58 && x<=64) || (x>=91 && x<=95) || (x>=123 && x<=126))		
		printf("it is speacial char\n");
	
        else if(x>=97 && x<=122)
		printf("it is lower case\n");
	else if(x>=65 && x<=90)
		printf("it is upper case\n");
	else if (x>=48 && x<=57)
		printf("it is numerical value\n");
	
}
	
