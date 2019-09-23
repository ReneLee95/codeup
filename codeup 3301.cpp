#include <iostream>

using namespace std;

int function(int target, int increase)
{
	if (target != 0)
	{
		if (target - 50000 >= 0)
		{
			target = target - 50000;
			increase++;

			return function(target, increase);
		}
		else if (target - 10000 >= 0)
		{
			target = target - 10000;
			increase++;

			return function(target, increase);
		}
		else if (target - 5000 >= 0)
		{
			target = target - 5000;
			increase++;
			return function(target, increase);
		}
		else if (target - 1000 >= 0)
		{
			target = target - 1000;
			increase++;
			return function(target, increase);
		}
		else if (target - 500 >= 0)
		{
			target = target - 500;
			increase++;
			return function(target, increase);
		}
		else if (target - 100 >= 0)
		{
			target = target - 100;
			increase++;
			return function(target, increase);
		}
		else if (target - 50 >= 0)
		{
			target = target - 50;
			increase++;
			return function(target, increase);
		}
		else
		{
			target = target - 10;
			increase++;
			return function(target, increase);
		}
	}
	else
	{
		return increase;
	}
}

int main()
{
	int target;
	int increase = 0;

	cin >> target;

	cout << function(target, increase) << endl;
}
