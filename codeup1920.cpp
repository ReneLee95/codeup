#include <stdio.h>

void function(int b);

int main(void)
{
    int a;
    scanf("%d",&a);
    function(a);
    return 0;
}

void function(int b)
{
    if(b==0||b==1)
    {
        printf("%d",b);
    }
    else
    {
        if(b>1)
        function(b/2);
        printf("%d",b%2);
    }
}

