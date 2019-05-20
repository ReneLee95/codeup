#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	for(int i=a; i>0; i--)
	{
		for(int k=a-1; k>i-1; k--)
		{
				printf(" ");
		}
		for(int j=i; j>0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
}


