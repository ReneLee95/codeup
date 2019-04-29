#include <stdio.h>

int main()
{
	int arr[1001];
	int rank[1001];
	int k;
	int cnt;
	scanf("%d",&k);
	
	for(int i =0; i<k; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(int i =0; i<k; i++)
	{
		cnt = 0;
		for(int s=0; s<k; s++)
		{
			if(arr[i]<arr[s])
			{
			cnt++;
			}
		}
		rank[i] = cnt+1;
	}
	for (int i = 0; i<k; i++)
	{
		printf("%d %d\n",arr[i],rank[i]);
	}
}

