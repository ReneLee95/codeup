#include <iostream>
#include <algorithm>

unsigned long long int arr[15] = {0, };

int main()
{
	unsigned long long int a1,r,n;
	unsigned long long int s;
	std::cin>>a1>>r>>n;
	s = r;
	for(int i =1; i<=n; i++)
	{
		if(i==1)
		{
			arr[i] = a1;
		}
		else
		{
			arr[i] = a1*r;
			r = r*s;
		}
	}

		std::cout<<arr[n];
}
