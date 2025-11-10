#include <stdio.h>
int main()
{
	int i=1,j=0,k=0,l=0,x,m=0,n=0;
	printf("### AGE only 15 persons###\n ");
	while(i<=15)
	{
		printf("%d. Enter age:",++m);
		scanf("%d",&x);
		if (x>0&&x<=5)
		{
			printf("%d baby age\n",x);
			++j;
		}
		else if (x>5&&x<18)
		{
			printf("%d School age\n",x);
			++k;
		}
		else if (x>=18&&x<=100)
		{
			printf("Adult age\n");
			if (x>18&&x<30)
				printf("Younger adult\n");
			if (x>30&&x<50)
				printf("middle adult\n");
			if (x>50)
				printf("Older adult\n");
			++l;
		}
		else
		{
			printf("Invalid input\n");
			++n;
		}
		i++;
	}
	printf("Total child  age: %d\n",j);
	printf("Total school age: %d\n",k);
	printf("Total adult  age: %d\n",l);
	printf("Total Invalid Inputs:%d\n",n);

}
