#include <iostream>

using namespace std;

int function(int first, int target, int increase)
{
	if (first > target)
	{
		swap(first, target);
	}
	if (first < target)
	{
		if (target-first >=8)
		{
			first = first + 10;
			increase++;

			return function(first, target, increase);
		}

		else if (target - first <0)
		{
			first = first - 1;
			increase++;

			return function(first, target, increase);
		}

		else if (target - first >=4)
		{
			first = first + 5;
			increase++;

			return function(first, target, increase);
		}
		else if(target - first >=1)
		{
			first = first + 1;
			increase++;

			return function(first, target, increase);
		}
	}
	else
	{
		return increase;
	}
}

int main()
{
	int increase = 0;
	int first, target;

	cin >> first;
	cin >> target;

	cout << function(first, target, increase) << endl;
}
