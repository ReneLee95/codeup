#include <iostream>
#include <algorithm>
#include <vector>

struct data{
	int index;
	int value1;
	int value2;
	
	bool operator<(const data&a) const
	{
		if(value1 == a.value1)
		{
			return value2 > a.value2;
		}
		else
		{
			return value1 > a.value1;
		}
	}
};

int main()
{
	data datas;
	std::vector<data> vector;
	int num1,num2;
	int check;
	int count = 1;
	std::cin>>check;
	for(int i =0; i<check; i++)
	{
		std::cin>>num1>>num2;
		datas.index = i+1;
		datas.value1 = num1;
		datas.value2 = num2;
		vector.push_back(datas);
	}
	std::sort(vector.begin(),vector.end());
	
	for(auto i : vector)
	{
		std::cout<<i.index<<" "<<i.value1<<" "<<i.value2<<std::endl;
	}
	std::cout<<std::endl;
}
