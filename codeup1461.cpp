#include <stdio.h>
 int main()
  {
   int a;
   int arr[100][100];
   int value =1;
   int i,j;
   scanf("%d",&a);
     for(i=0; i<a; i++)
     {
       for(j=0; j<a; j++)
       {
        arr[i][j] = value;
       value+=1;
       }
     }
     for(i=0; i<a; i++)
     {
       for(j=a-1; j>=0; j--)
        {
         printf("%d ",arr[i][j]);
        }
      printf("\n");
     }
   return 0;
 }
       

