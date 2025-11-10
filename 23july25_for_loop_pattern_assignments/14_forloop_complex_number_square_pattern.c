#include <stdio.h>
int main()
{
	int i,x,j,a;
	for (i=1;i<=5;i++)
	{
		for (x=1,j=0;  x<=5 ; x++,j++)
		{
			if (i==1)
				printf("%d ",5);
			else if (x==1) 
				printf("5 ");
			else if (i==2)
				printf("4 ");
			else if (i==3&&x==2)
				printf("4 ");
			else if (i==3)
				printf("3 ");
			else if (i==4&&x==2)
				printf("4 ");
			else if (i==4&&x==3)
				printf("3 ");
			else if (i==4)
				printf("2 ");
			else if (i==5&&x==2)
				printf("4 ");
			else if (i==5&&x==3)
				printf("3 ");
			else if (i==5&&x==4)
				printf("%d ",2);
			else if (i==5&&x==5)
				printf("%d ",1);


		}
	
	printf("\n");
	printf("\n");
	}
}






