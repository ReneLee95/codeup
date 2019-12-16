#include <iostream>
#include <algorithm>
#include <vector>

std::vector<int> min;

int main()
{
	int num1, num2;
	std::cin >> num1 >> num2;
	int k = 0;
	int count = 0;
	int i = 1;
	int j = 1;
	if (num1 == 1 || num2 == 1)
	{
		min.push_back(1);
	}
	if (num1 == 2 || num2 == 2)
	{
		min.push_back(2);
	}
	do
	{
		if (i * i == num1)
		{
			min.push_back(i);
			break;
		}
		else if (num1 % i == 0) {
			min.push_back(i);
			min.push_back(num1 / i);
			i++;
		}
		else
		{
			if (i * i > num1) break;
			i++;
		}
	} while (i <= num1/3);
	do
	{
		if (j * j == num2)
		{
			min.push_back(j);
			break;
		}
		else if (num2 % j == 0) {
			min.push_back(j);
			min.push_back(num2 / j);
			j++;
		}
		else
		{
			if (j * j > num2) break;
			j++;
		}
	} while (j <= num2 / 3);
	sort(min.begin(), min.end());
	min.erase(unique(min.begin(), min.end()), min.end());
	for (int i = 0; i < min.size(); i++)
	{
		std::cout << min[i] << " ";
	}
}
