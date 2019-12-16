#include <stdio.h>

int function(int m, int n) {
	
	printf("%d ",m);

	if(m!=n)
	{
	    m+=2;
    	function(m,n);
	}
	return 0;
	
}

int main() {
	
	int a, b, c, d;
	
	scanf("%d %d", &a, &b);
	c=a;
	d=b;
	if(a%2==0)
		c=a+1;
	
	if(b%2==0)
		d=b-1;
		
	function(c,d);
}
