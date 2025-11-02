#include <stdio.h>
int main() 
{
    int x,y,z=0,a;
    printf("CHECK_palindrome or not\n");
    printf("Enter a number:");
    scanf("%d",&x);
    y=x;
    while (x!=0) 
    {
        a=x%10;
        z=z*10+a;
        x=x/10;
    }
    if (y==z)
        printf("It is palindrome:%d\n",z);
    else
        printf("It is not palindrome:%d\n",z);

}

