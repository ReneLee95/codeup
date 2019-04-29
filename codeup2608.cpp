#include <stdio.h>
#include <string.h>

int a;
char arr[100];

void function(int c)
{
    if(c==a)
    {
    	printf("%s\n",arr);
		return;
	}
    arr[c] = 'O';
    function(c+1);
    arr[c] = 'X';
    function(c+1);
}

int main()
{
    scanf("%d",&a);
    function(0);
}

