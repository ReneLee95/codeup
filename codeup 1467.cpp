#include <iostream>
#include <algorithm>

int arr[101][101];

int main()
{
	int n,m;
	int count = 1;
	int k = 1;
	std::cin>>n>>m;
	
	for(int i = 0; i<n; i++)
	{
		k = 1;
		for(int j =m-1; j>=0; j--)
		{
			arr[i][j] = count+((k-1)*n);
			k++;
		}
		count ++;
	}
	
	for(int i =0; i<n; i++)
	{
		for(int j =0; j<m; j++)
		{
			std::cout<<arr[i][j]<<" ";
		}
		std::cout<<std::endl;
	}
}
