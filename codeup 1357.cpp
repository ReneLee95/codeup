#include <stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	
	for(int i=1; i<=a; i++)
	{
		for(int j=i; j>0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	for(int i=a; i>0; i--)
	{
		for(int j=i-1; j>0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
}
