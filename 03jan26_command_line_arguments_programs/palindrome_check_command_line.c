#include <stdio.h>
int main(int argc, char *argv[])
{
    int i,j,k,x;
    for (i=1; i<argc; i++) 
    {
        for (j = 0,x=0; argv[i][j] != '\0'; j++) 
	{
            x++;
        }
        for(j=0, k=x-1; j<k; j++, k--) 
	{
            if(argv[i][j]!=argv[i][k])
	    {
                break;
            }
        }
        if(j>=k)
            printf("Palindrome     :  %s\n", argv[i]);
        else
            printf("Not Palindrome :  %s\n", argv[i]);
    }
}
