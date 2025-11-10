#include <stdio.h>
int main()
{
	int i,j=0,l=0;
	int arr[10]={-1,5,6,-5,10,-2,3,7,-8,1};
	for (i=0; i<10; i++)
	{
		if (arr[i]>0)
			j++;
		else
			l++;
	}
	printf("Positive count %d\nNegative count %d\n",j,l);
}
