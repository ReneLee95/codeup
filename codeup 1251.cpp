#include <iostream>

using namespace std;

int mymax(int a, int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int main()
{
	int a,b;
	cin>>a>>b;
	cout<<mymax(a,b);
}
