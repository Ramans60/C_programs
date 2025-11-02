#include <stdio.h>
int main()
{
	int x,y,z;
	char m,f;
	printf("male=m female=f\n");
	printf("enter male/female:");
	scanf("%d",&x);
	if (x==m||f){
		if (x==m){
			printf("enter your age:");
			scanf("%d",&y);
			if (x>20)
				printf("you are eligible for insurance\n");
			else
				printf("you are not eligible\n");
		}
		if (x==f){
			
			printf("enter your age:");
			scanf("%d",&z);
			if(x>17)
				printf("you are eligible for insurance\n");
			else
				printf("you are not eligible for insurance\n");
		}
	}
	else
		printf("invalid data");
}
		


