#include <iostream>

using namespace std;

int main()
{
	int target;
	cin >> target;
	int five = 0, one = 0, second = 0;
	if (target % 10 != 0)
	{
		cout << "-1" << endl;
	}
	else
	{
		while (1)
		{
			if (target / 300 != 0)
			{
				target = target - 300;
				five = five + 1;
			}
			else if (target / 60 != 0)
			{
				target = target - 60;
				one = one + 1;
			}
			else if (target / 10 != 0)
			{
				target = target - 10;
				second = second + 1;
			}
			else
			{
				cout << five << ' ' << one << ' ' << second << endl;
				break;
			}
		}
	}

	return 0;
}
