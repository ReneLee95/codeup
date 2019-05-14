#include <stdio.h>

int d(int a)
{
	int b=0;
	for(int i=a; i>=1; i--)
	{
		if(a%i==0)
		{
			b++;
		}
		else
		{
			b=b;
		}
	}
	if(b==2)
	{
		printf("prime");
	}
	else
	{
		printf("not prime");
	}
}

int main()
{
	int a;
	scanf("%d",&a);
	d(a);
}
