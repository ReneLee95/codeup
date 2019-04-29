#include <stdio.h>
#define num 5

int main()
{
	int arr[num];
	int a;
	
	for(int i=0; i<num; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(int i=0; i<num; i++)
	{
		for(int j=0; j<num; j++)
		{
			int k;
			if(arr[j]>arr[j+1])
			{
				k=arr[j];
				arr[j]= arr[j+1];
				arr[j+1]= k;
			}
		}
	}
	printf("%d",arr[3]);
}


