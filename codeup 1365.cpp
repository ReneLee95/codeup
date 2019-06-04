#include <stdio.h>

int main()
{
	int a,i=0,j=0;
	int k;
	char arr[100][100]={NULL, };
	
	scanf("%d",&a);
	
	do
	{
			arr[0][j]='*';
			arr[i][0]='*';
			arr[a-1][j]='*';
			arr[i][a-1]='*';
			arr[a/2][j]='*';
			arr[i][a/2]='*';

			i++;
			j++;
		if(i==j)
		{
			arr[i][j]='*';
		}
		if(k=a-1-i)
		{
			arr[i][k]='*';
		}
	}
	while(i<a);
	
	for(int i=0; i<a; i++)
	{
		for(int j=0; j<a; j++)
		{
			printf("%c",arr[i][j]);
		}
		printf("\n");
	}
}

