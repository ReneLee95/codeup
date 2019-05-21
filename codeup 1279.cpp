#include <stdio.h>

int main()
{
	int a,b;
	int sum=0;
	int k;
	int arr[10];
	scanf("%d %d",&a,&b);
	k = a;
	for(int i=0; i<=b-a; i++)
	{
		if(i%2==1)
		{
			arr[i] = -k;
		}
		else
		{
			arr[i] = +k;
		}
		k++;
	}
	for(int i=a; i<=b; i++)
	{
		if(i%2==1)
		{
			sum += i;
		}
		else
		{
			sum -=i;
		}
	}
	
	for(int i=0; i<=b-a; i++)
	{
		printf("%d",arr[i]);
	}
}
