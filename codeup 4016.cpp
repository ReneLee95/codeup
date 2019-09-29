#include <iostream>

using namespace std;

int gcd(int a, int b)
{
	int c;
	while(b!=0)
	{
		c = a%b;
		a = b;
		b = c;
	}
	return a;
}

int main(void)
{
	int a,b,c;
	cin>>a>>b>>c;
	
	cout<<gcd(gcd(a,b),c)<<endl;
}
