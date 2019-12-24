#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

int main()
{
	long int num1, num2;
	int k;

	std::cin >> num1 >> num2 >> k;

	int count = 0;

	for (int i = num1; i <= num2; i++)
	{
		long int cat = i;
		do
		{
			if ((cat % 10) == k) count++;
			cat = cat / 10;
		} while (cat > 0);
	}

	std::cout << count;
}
