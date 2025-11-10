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
		++b;
	else if (a==2)
		++c;
	else if (a==3)
		++d;
	else if(a==4)
		++e;
	else if(a==5)
		++f;
	else if(a==6)
		++g;
	else if(a==7)
		++h;
	else if(a==8)
		++i;
	else if(a==9)
		++j;
	else if(a==0)
		++k;

        x=x/10;
    }
        printf("Numer of zero :%d\n",k);
        printf("Numer of one  :%d\n",b);
        printf("Numer of Two  :%d\n",c);
        printf("Numer of Three:%d\n",d);
        printf("Numer of Four :%d\n",e);
        printf("Numer of Five :%d\n",f);
        printf("Numer of Six  :%d\n",g);
        printf("Numer of Seven:%d\n",h);
        printf("Numer of Eight:%d\n",i);
        printf("Numer of Nine :%d\n",j);

}

