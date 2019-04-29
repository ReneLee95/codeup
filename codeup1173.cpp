#include <stdio.h>
int a,b,c,d;
int main()
{
scanf("%d %d",&a,&b);
	c=a;
	d=b-30;
if(a-1<0)
	{
      if(b<30)
      {
        d=60+d;
        c=23;
        printf("%d %d",c,d);
      }
      else
      {
        printf("%d %d",c,d);
      }
    }
else
    {
    	if(b<30)
      {
        d=60+d;
        c=a-1;
        printf("%d %d",c,d);
      }
        else
      {
        printf("%d %d",c,d);
      }
    }
}

