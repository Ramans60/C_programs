#include <stdio.h>
int main()
{
    int i=0,x,y,a,b,c;
    printf("Swap the first and last digit of the number\nEnter a number: ");
    scanf("%d",&x);
    y=x;
    while (y!=0)
    {
        a=y%10;
        i++;
        if(i==1)
		b=a; 
        y=y/10;
    }
      if (x<10)
    {
        printf("Swapped number: %d\n",x);
    }
    c=a; 
    y=1;
    a=1;
    while (a<i) 
    {
        y=y*10;
        a++;
    }
    a=(x%y)/10;   
    x=b*y+a*10+c; 
    printf("Swapped number: %d\n",x);
}

