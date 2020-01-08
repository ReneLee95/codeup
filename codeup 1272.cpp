#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int num1,num2;
	int count = 1;
	int count2 = 1;
	int k = 0;
	cin>>num1>>num2;
	
	vector<int> vector;
	
	vector.push_back(0);
	
	for(int i =1; i<10000000; i++)
	{
		k = 0;
		if(i%2==0)
		{
			k = count*10;
			vector.push_back(k);
			count++;
		}
		else
		{
			k = count2;
			vector.push_back(k);
			count2++;
		}
	}
	
	int result = vector[num1] + vector[num2];
	
	cout<<result;
}
