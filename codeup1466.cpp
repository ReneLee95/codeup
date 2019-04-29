#include <stdio.h>

int main()
{
	int a,b,i,j;
	int arr[100][100];
	int k;
	scanf("%d %d",&a,&b);
	
	for (i=0; i<b; i++)
	{
		for(j=0; j<a; j++)
		{
			k++;
			arr[i][j] =k;
		}
	}	
	for(j=a-1; j>=0; j--)
	{
		for(i=b-1; i>=0; i--)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}	
	return 0;
}

