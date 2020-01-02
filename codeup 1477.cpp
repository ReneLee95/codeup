#include <iostream>
#include <algorithm>

#define X_Pos 101
#define Y_Pos 101

long long int arr[X_Pos][Y_Pos]{{0, },};

int main()
{
	long long int n, m;
	long long int count = 1;
	std::cin >> n >> m;
	int p;
	int cycle = 0;
	int k = 1;
	int x, y;
	if (n <= m)
	{
		for(int i=0; i<m; i++)
		{
			cycle = 0;
			for(int j=0; j<=i; j++)
			{
				if(cycle<n)
				{
					arr[j][i-j] = count;
					count++;
					cycle++;
				}
			}
		}
		p = n;
		for (int d = 1; d < n; d++)
		{
			cycle=0;
			y = 0;
			for(int j = m; j>d; j--)
			{
				if(cycle<p-1)
				{
					arr[d+y][j-1] = count;
					count++;
					y++;
					cycle++;
				}
			}
			p--;
		}
	}
	else
	{
		for(int u = 0; u<n; u++)
		{
			for(int i =0; i<m; i++)
			{
				for(int j =0; j<m; j++)
				{
					arr[i][j] = count;
					count++;
				}
			}
		}	
	/*	p = n;
		for (int d = 1; d < n; d++)
		{
			cycle=0;
			y = 0;
			for(int j = m; j>d; j--)
			{
				if(cycle<p-1)
				{
					arr[d+y][j-1] = count;
					count++;
					y++;
					cycle++;
				}
			}
			p--;
		}*/
	}
	for (int i = 0; i < n+10; i++)
	{
		for (int j = 0; j < m+10; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
