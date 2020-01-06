#include <iostream>
#include <vector>

using namespace std;

int main()
{
	char arr[26];
	vector<char> vector;
	for(int i =0; i<26; i++)
	{
		arr[i] = i+65;
	}
	int num;
	cin>>num;
	
	do
	{
		if(num%26 ==0)
		{
			vector.push_back(arr[25]);
			num = num/26-1;
		}
		else
		{
			vector.push_back(arr[num%26-1]);
			num = num/26;
		}
	}while(num !=0);
	for(int i = vector.size()-1; i>=0; i--)
	{
		cout<<vector[i];
	}
}
