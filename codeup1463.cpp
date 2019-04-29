#include <stdio.h>
int main()
{
    int a,i,j;
    int arr[100][100];
    int k=1;
    scanf("%d",&a);
    for(i=a-1; i>=0; i--)
    {
        for(j=0; j<a; j++)
        {
            arr[i][j]=k++;
        }
    }
    for(i=a-1; i>=0; i--)
    {
        for(j=a-1; j>=0; j--)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
}

