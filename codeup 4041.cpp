#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	int num, a, b;
	std::cin >> num;

	std::vector<int> vector;
	int arrnum = 0;
	int count = 0;
	int count2 = 0;
	int result = 0;

	do
	{
		a = num % 10;
		b = num / 10;
		num = b;
		result += a;
		vector.push_back(a);
	} while (b != 0);
	do
	{
		if (vector[count] == 0)
		{
			count++;
		}
		if (count2 == vector.size()) break;
		count2++;
	} while (vector[count+1] != 0);
	for (int i = count; i < vector.size(); i++)
	{
		std::cout << vector[i];
	}
	std::cout << std::endl;
	std::cout << result;
}
