#include <stdio.h>

int i;

int refunc(int c)
{
	i++;
	printf("%d\n",i);
	if (i==c)
	return 0;
	refunc(c);
	}
	
int main()
{
	int a;
	scanf("%d",&a);
	refunc(a);
	return 0;
}
