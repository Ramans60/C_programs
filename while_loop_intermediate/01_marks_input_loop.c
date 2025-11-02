#include <stdio.h>
int main()
{
	int i=1,x,z=0;
	char y,a;
	printf("Do you want continue:(yes) 'y/n' (no):");
	scanf("%c",&y);
	while (y=='y')
	{
		printf("continue or not: y/n -\n");
		scanf("%c",&a);
		if (a=='y')
		{
			printf("Enter your mark:");
			scanf("%d",&x);
			if(x>0&&x<100)
			{
					z=z+x;
					i++;
			}
			else if (x<1)
			{
				printf("Invalid\n");
				break;
			}
			else if(x>101)
			{
				printf("wrong mark\n");
				continue;
			}
		}
		else if(a=='n')
			break;
	}
	printf("No.valid marks Entered:%d\n",i);
	printf("Total marks:%d\n",z);
}
