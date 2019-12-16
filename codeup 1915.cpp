#include <iostream>

using namespace std;

int function(int a)
{
	if(a==1) return a;
	if(a==0) return a;
	else return function(a-1) +function(a-2);
}

int main()
{
	int a;
	cin>>a;
	cout<<function(a);
	
	return 0;
}
