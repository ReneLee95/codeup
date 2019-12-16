#include <stdio.h>

int main()
{
	int a,b;
	int total;
	int arr[10001];
	scanf("%d",&a);
	
	for(int i=0; i<a; i++)
	{
		scanf("%d",&b);
		arr[i]=b;
		if(b==0)
		{
			arr[i-1]=0;
		}
		if(arr[i-1]==0)
		{
			arr[i-2]=0;
		}
		i++;
	}
	
	for(int i=0; i<a; i++)
	{
		total+=arr[i];
	}
	
	printf("%d",total);

}

