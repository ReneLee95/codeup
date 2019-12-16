#include <iostream>

using namespace std;

int function(unsigned long int a)
{
	if(a%3==0)
	{
		cout<<"1"<<endl;
	}
	else
	{
		cout<<"0"<<endl;
	}
}

int main()
{
	unsigned long int a;
	
	cin>>a;
	
	function(a);
	
	return 0;
}
