#include <stdio.h>
int main(int argc, char *argv[ ])
{
	int i,j,k;
	for(i=0; argv[i] != NULL ; i++)
	{
		k=0;
		for(j=0; argv[i][j]; j++)
		{
			k++;
			printf("%c",argv[i][j]);
		}
		printf("\n");
		printf("letters count = %d\n",k);
		printf("\n");
	}
}

