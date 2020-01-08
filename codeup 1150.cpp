#include <iostream>
#include <algorithm>
#include <vector>

bool compare(int a, int b)
{
	return a < b;
}

int main()
{
	std::vector<int> vector;
	
	int num;
	
	for(int i =0; i<3; i++)
	{
		std::cin>>num;
		vector.push_back(num);
	}
	
	sort(vector.begin(),vector.end(),compare);
	
	std::cout<<vector[0];
}
