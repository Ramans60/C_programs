#include <stdio.h>
int main()
{
   while(1)
   {
      int x,y,z,a;
      {
	 printf("Arithmetic operators\n Enter a number X: ");
	 scanf("%d",&x);
	 printf("Enter a number Y: ");
	 scanf("%d",&y);
	 printf("1-Addition (X+Y)\n2-Subtraction (X-Y)\n3-multiplication\n4-division\n Enter a number here :");
	 scanf("%d",&z);
	 if (z==1)
	 {
	    printf("%d\n",(x+y));
	    printf("do you want continue \n enter 1-continue\nOther wise exit\n Enter a number to continue :" );
	    scanf("%d",&a);
	    if (a==1)
	       continue;
	    else
	       break;
	 }
	 else if (z==2)
	 {
	    printf("%d\n",(x-y));
	    printf("do you want continue \n enter 1-continue\nOther wise exit\n Enter a number to continue :" );
       	    scanf("%d",&a);
     	    if (a==1)
      	       continue;
	    else
	       break;
	 }
	 else if (z==3)
	 {
	    printf("%d\n",(x*y));
	    printf("do you want continue \n enter 1-continue\nOther wise exit\n Enter a number to continue :" );
	    scanf("%d",&a);
	    if (a==1)
	       continue;
	    else
	       break;
	 }
	 else if (z==4)
	 {
	    printf("%d\n",(x/y));
	    printf("do you want continue \n enter 1-continue\n other wise exit\n Enter a number to continue :" );
	    scanf("%d",&a);
	    if (a==1)
	       continue;
	    else
	       break;
	 }
	 else
	    break;
      }
   }
}

