#include <iostream>
#include <algorithm>

int main()
{
	long long int n,m;
	std::cin>>n>>m;
	
	int a,b;
	a = (n+m)/2;
	b = n-a;
	
	std::cout << a<<std::endl<<b<<std::endl;
}
