#include <stdio.h>
#include <ctype.h>
int _isalpha(int x);
int main() 
{
    char a;
    scanf("%c", &a);
    int b=_isalpha(a);
    printf("%c\n",b); 
}
int _isalpha(int x)
{
    if (isupper(x)) 
	    return x + 32 ; 
    else if (islower(x)) 
	    return x - 32 ;
    else 
	    return 1 ;
}

