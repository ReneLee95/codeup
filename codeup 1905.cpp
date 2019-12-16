#include <stdio.h>

int function(int m, int n) {
	
	if(n%2==1)
	{
		printf("%d ",n);
	}

	else if(n==m)
	{
		return 0;
	}
		function(m,n+1);
}

int main() {
	
	int a, b, c, d;
	
	scanf("%d %d", &a, &b);	
	function(b,a);
}
