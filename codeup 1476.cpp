#include <iostream>
#include <algorithm>

#define X_Pos 101
#define Y_Pos 101

long long int arr[X_Pos][Y_Pos];

int main()
{
	long long int n, m;
	long long int count = 1;
	std::cin >> n >> m;

	int k = 1;
	int x, y;
	if (n < m)
	{
		for (int i = 0; i < n; i++)
		{
			x = 0;
			for (int j = 0; j <= i; j++)
			{
				if (i + x >= 0 && j >= 0)
				{
					arr[i + x][j] = count;
					x--;
					count++;
				}
			}
		}
		for (int d = 1; d < m; d++)
		{
			y = 0;
			for (int j = d; j < m; j++)
			{
				if (n - 1 - y >= 0 && d + y >= 0)
				{
					arr[(n - 1) - y][d + y] = count;
					count++;
					y++;
				}
			}
		}
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			x = 0;
			for (int j = 0; j < m; j++)
			{
				if (i + x >= 0)
				{
					arr[i + x][j] = count;
					x--;
					count++;
				}
			}
		}

		for (int d = 1; d < m; d++)
		{
			y = 0;
			for (int j = d; j < m; j++)
			{
				if (n - 1 - y >= 0 && d + y >= 0)
				{
					arr[(n - 1) - y][d + y] = count;
					count++;
					y++;
				}
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
