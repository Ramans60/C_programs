#include <stdio.h>
#include <ctype.h>
int main()
{
	char x,c; 
	printf("Enter a char:");
	scanf("%c",&x);
	if (x==65||x==97||x==69||x==101||x==73||x==105||x==79||x==111||x==86||x==117)
		printf("It is vowels\n");
	else if (isalpha(x))
		printf("It is constant\n");
	else 
		printf("Invalid char\n");
}

