#include <stdio.h>
int main()
{
    int a,b,sum=0;
    int total=0;
    scanf("%d %d",&a,&b);
    if(a<90)
    {
        for(a; a<90; a+=5)
        {
            sum++;
        }
    }
    total=sum+b;
    printf("%d",total);
    return 0;
}

