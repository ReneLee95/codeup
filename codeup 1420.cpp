#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

struct data{
	char name[30];
	int score;
	
	bool operator<(const data &a)
	{
		return score > a.score; 
	}
};

int main()
{
	data datas;
	std::vector<data> vector;
	std::vector<data>::iterator i;
	
	int num;
	std::cin>>num;
	
	for(int i =0; i<num; i++)
	{
		std::cin>>datas.name>>datas.score;
		vector.push_back(datas);
	}
	std::sort(vector.begin(),vector.end());

	std::cout<<vector[2].name;


}
