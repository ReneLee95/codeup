#include <stdio.h>

int main()
{
	int a,b;
	int temp;
	int arr[100]={0};
	scanf("%d",&a);
	for(int i=0; i<a; i++)
	{
		scanf("%d",arr+i);
	}
	for(int i=0; i<a; i++)
	{
		for(int j=i+1; j<a; j++)
		{
			if(*(arr+i)>*(arr+j))
			{
			temp = *(arr+i);
			*(arr+i) = *(arr+j);
			*(arr+j) = temp;
			}
		}
	}
	
	for(int i=0; i<a; i++)
	{
		printf("%d\n",*(arr+i));
	}
}

