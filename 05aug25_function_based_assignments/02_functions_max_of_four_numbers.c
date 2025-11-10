#include <stdio.h>

int a,b,c,d,s,t,u;
max_of_four()
{
	{
		if (a<b)
			s=a;
		else 
			s=b;
	}
	{
		if (s<c)
			t=c;
		else 
			t=s;
	}
	{
		if (t<d)
			u=d;
		else
			u=t;
	}
}
int main() 
{
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int ans = max_of_four();
	printf("%d", ans);    
	return 0;
}
