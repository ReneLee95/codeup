#include <stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d %d %d",&a,&b,&c);
    
    if(a+b>c)
    {
    	if(a==b&&b==c)
  		{
    	    printf("Á¤»ï°¢Çü");
  		}
    	else if((c*c)==(a*a)+(b*b))
    	{
    	    printf("Á÷°¢»ï°¢Çü");
    	}
    	else if((a==b)&&(b!=c)||(a==c)&&(c!=b)||(b==c)&&(c!=a))
    	{
    	    printf("ÀÌµîº¯»ï°¢Çü");
    	}
    	else
    	{
    	    printf("»ï°¢Çü");
    	}
    } 
    else
    {
    	printf("»ï°¢Çü¾Æ´Ô");
	} 
}

