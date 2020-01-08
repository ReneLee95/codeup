#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;



int main()
{
	long long int num1,num2;
	cin>>num1>>num2;
	
	vector<int> vector;
	
	long long int result = 1;
	
	if(num2 ==0)
	{
		result = 1;
		cout<<"result"<<endl;
	}
	else
	{
		for(int i =1; i<=num2; i++)
		{
			result *= num1;
		}
		cout<<imod(result,1000000007)<<endl;
	}
}
