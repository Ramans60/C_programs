#include <stdio.h>
int main()
{
	int i=1,j=0,n=10,k=1,s;
	printf("## STAR pattern ##\n");
	i=1;
	while (i<=n) 
	{
		s=n-i;
		j=1;
		while (j<=s) 
		{
			printf("*");
        		j++;
    		}
		printf("\n");
    		k=1;
		while (k<=2*i-1) 
		{
			printf("*");
			k++;
		}
		printf("\n");
    		i++;
	}
}


