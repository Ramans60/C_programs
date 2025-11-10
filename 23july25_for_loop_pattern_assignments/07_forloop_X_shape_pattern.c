#include <stdio.h>
int main()
{
	int i,x,j;
	for (i=1;i<=5;i++)
	{
		for (x=1,j==0;  x<=5 ; x++,j++)
		{
			if (i==1&&(x==1||x==5)||i==2&&(x==2||x==4)||(i==3&&x==3)||i==4&&(x==2||x==4)||i==5&&(x==1||x==5))
				printf("1 ");
			else
				printf("0 ");
		}
	
	printf("\n");
	printf("\n");
	}
}






