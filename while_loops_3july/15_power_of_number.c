#include <stdio.h>
int main()
{
	int i=1,x,y=0,z,a,b=0,c=0;
	printf("Enter number of subjects:");
	scanf("%d",&x);
	while (i<=x )
	{
		printf("Enter your mark:");
		scanf("%d",&z);
		{
		if (z>=35&&z<=100){
			(80<=z>=100)? printf("Grade:A\n"):(60<=z>80) ? printf("Grade:B\n"):printf("Grade:C\n");
			printf("pass\n");
			y=y+z;
			b++;
			printf("sum:%d\n",y);
		}
		else if (z>0&&z<35)
		{
			printf("fail\n");
			a=a+z;
			c++;
			printf("sum:%d\n",a);
		}
		else if (z<0&&z>100)
			printf("invalid\n");
		}
		i++;
	}
	printf("Number of pass subjects:%d\n",b);
	printf("Total pass marks:%d\n",y);
	printf("Number of fail subjects:%d\n",c);
	printf("Total fail marks:%d\n",a);
}
