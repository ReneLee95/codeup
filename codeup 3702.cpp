#include <iostream>
#include <algorithm>

unsigned long long int arr[51][51] = { {0, }, };

int main()
{
	int r,c;
	std::cin >> r >> c;
	for (int i = 1; i <= 51; i++)
	{
		for (int j = 1; j <=51-i+1; j++)
		{
			arr[i][1] = 1;
			if (i == 1)
			{
				arr[i][j] = 1;
			}
			if (arr[i][j] == 0)
			{
				arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
			}
		}
	}
	for (int i = 1; i <= 51; i++)
	{
		for (int j = 1; j <= 51 - i + 1; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		printf("\n");
	}
	std::cout << std::endl;
	unsigned long long int result = arr[r][c];
	std::cout << result % 100000000;
}
