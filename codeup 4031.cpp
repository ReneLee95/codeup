#include <iostream>
#include <algorithm>

bool compare(int a,int b)
{
	return a > b;
}

int main()
{
	long long int arr[7] ={0, };
	long long int arr2[7] = {0, };
	long long int total[2] = {0, };
	
	int arrnum = 0;
	int arrnum2 = 0;
	
	int num;
	for(int i =0; i<7; i++)
	{
		std::cin>>num;
		if(num%2 ==0)
		{
			arr[arrnum] = num;
			arrnum++;
		}
		else
		{
			arr2[arrnum2] = num;
			arrnum2++;
		}
	}
	
	std::sort(arr,arr+arrnum,compare);
	std::sort(arr2,arr2+arrnum2,compare);
	
	int result = arr[0] + arr2[0];
	
	std::cout<<result;
}
