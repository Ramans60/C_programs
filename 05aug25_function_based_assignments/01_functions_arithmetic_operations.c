#include <stdio.h>
int x,y;
int main()
{
   add();
   sub();
   mul();
   div();
}
add()
{
   printf("Addition\n");
   printf("x:");
   scanf("%d",&x);
   printf("y:");
   scanf("%d",&y);
   printf("x+y=%d\n",(x+y));
}
sub()
{
   printf("Subtract\n");
   printf("x:");
   scanf("%d",&x);
   printf("y:");
   scanf("%d",&y);
   printf("x-y=%d\n",(x-y));
}
mul()
{
   printf("Multiplication\n");
   printf("x:");
   scanf("%d",&x);
   printf("y:");
   scanf("%d",&y);
   printf("x*y=%d\n",(x*y));
}
div()
{
   printf("Division\n");
   printf("x:");
   scanf("%d",&x);
   printf("y:");
   scanf("%d",&y);
   printf("x/y=%d\n",(x/y));
}

