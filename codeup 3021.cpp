#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[1000001];
	int arr2[1000001];
	int a,b;
	int total;
	for(int i=0; i<100; i++)
	{
		scanf("%d" , a);
		arr[i]=a;
		for(int j=0; j<100; j++)
		{
			scanf("%d",b);
			arr2[j]=b;
		}
	}
	for(int i=0; i<100; i++)
	{
		total = arr[i] - arr2[i];
	}
	printf("%d",total);
}

