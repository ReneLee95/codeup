#include <stdio.h>
int main()
   {
    int a;
    int arr[100][100];
    int i,j;
    int k = 1;
    scanf("%d",&a);
    for(i=0; i<a; i++)
       {
       k=i+1;
         for(j=0; j<a; j++)
         {
         arr[i][j] = k;
         k+=a;
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


