#include <iostream>

using namespace std;

int main(void)
{
	int sum = 0;
	for (int i = 0; i < 7; i++)
	{
		int k;
		cin >> k;
		if (k % 2 == 1)
		{
			sum += k;
		}
	}
	if (sum == 0)
	{
		cout << "-1" << endl;
	}
	else
	{
		cout << sum << endl;
	}
}
