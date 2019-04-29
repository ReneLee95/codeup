#include <stdio.h>
int main()
{
  int a,b,i,j;
  int arr[100][100];
  int k=0;
  scanf ("%d %d",&a,&b);
  for (i=a-1; i>=0; i--)
  {
  for (j=0; j<b; j++)
  {
  k++;
  arr[i][j] = k;
  }
  }
  for (i=0; i<a; i++)
  {
  for (j=0; j<b; j++)
  {
  printf("%d ",arr[i][j]);
  }
  printf("\n");
  }
}

