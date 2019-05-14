#include <stdio.h>

int main()
{
    int a,b=0;
    int k=1;
    int s=10;
    int arr[100]={0,};
    scanf("%d %d",&a,&b);
    for(int i=0; i<b; i++)
    {
        if(i%2==0)
        {
            arr[i]=k;
            k++;
        }
        else
        {
            arr[i]=s;
            s+=10;
        }
    }
    printf("%d",arr[a-1]+arr[b-1]);
}
