#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
	return a > b;
}

int main()
{
	int topping = 0;
	int pizza = 0;
	int toPrice = 0;
	int pizzaKcal[100] = {0, };
	cin >> topping;
	cin >> pizza >> toPrice;

	int toNum[100] = { 0, };
	int pKcal = 0;

	cin >> pKcal;

	for (int i = 0; i < topping; i++)
	{
		int k;
		cin >> k;
		toNum[i] = k;
	}
	sort(toNum, toNum + topping, compare);

	int i = 0;
	int totalPrice[100] = { 0, };
	int num = topping;
	while (num != 0)
	{
		int A = 0;
		for (int i = 0; i < num; i++)
		{
			A += toNum[i];
		}
		pizzaKcal[i] = A + pKcal;
		totalPrice[i] = pizza + (toPrice * num);
		num--;
		i++;
	}

	int result[100] = { 0, };

	for (int i = 0; i < topping; i++)
	{
		result[i] = pizzaKcal[i] / totalPrice[i];
	}
	sort(result, result + topping, compare);

	cout << result[0] << endl;

	return 0;
}
