#include <stdio.h>
int main()
{
  int  a;
  int arr[100][100];
  int i,j;
  int value = 0;
  scanf("%d",&a);
    for (i=0; i<a; i++)
    {
      for(j=0; j<a; j++)
       {
         value+=1;
         arr[i][j]=value;
        }
     }
     for(i=0; i<a; i++)
     {
      for(j=0; j<a; j++)
      {
        printf("%d ",arr[i][j]);
      }
     printf("\n");
     }
 return 0;
}

