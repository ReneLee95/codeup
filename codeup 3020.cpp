#include <iostream>
#include <algorithm>
#include <vector>

struct data{
	int index;
	int value1;
	int value2;
	
	bool operator<(const data& a)const      //compare function
	{
      return value1 < a.value1 , value2 < a.value2;
	}
};

int main()
{
	
}
