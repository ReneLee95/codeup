#include <stdio.h>

int max(int a, int b);

int main(void)
{
	int c,d;
	
	scanf("%d %d",&c,&d);
	
	printf("%d\n",max(c,d));
}


int max(int a,int b)
{
	int temp=0;
	
	int i,j;
	
	j = (a>b)?a:b;
	
	for(i=1; i<=j; i++)
	{
		if(a%i==0 && b%i==0)
		{
			temp = i;
		}
	}
	
	return temp;
}
