#include <stdio.h>
int main()
{
    int x,y,z=0,a,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0;
    printf("FREQUENCY of the number\n");
    printf("Enter a number:");
    scanf("%d",&x);
    while (x!=0)
    {
        a=x%10;
	if (a==1)
        	printf(" one  :%d\n",a);
	else if (a==2)
        	printf(" two  :%d\n",a);
	else if (a==3)
	        printf(" three:%d\n",a);
	else if(a==4)
        	printf(" four :%d\n",a);
	else if(a==5)
        	printf(" five :%d\n",a);
	else if(a==6)
	        printf(" six  :%d\n",a);
	else if(a==7)
       	 	printf(" seven:%d\n",a);
	else if(a==8)
        	printf(" eight:%d\n",a);
	else if(a==9)
        	printf(" nine :%d\n",a);
	else if(a==0)
		printf(" zero :%d\n",a);
        x=x/10;
    }
}
