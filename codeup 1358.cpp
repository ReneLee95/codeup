#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	for(int i=a; i>0; i-=2)
	{
		for(int j=1; j<a; j+=2)
		{
			printf(" ");
		}
		for(int j=0; j<=a; j+=2)
		{
			printf("*");
		}
		printf("\n");
	}
}
