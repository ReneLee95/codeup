#include <stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d %d %d",&a,&b,&c);
    
    if(a+b>c)
    {
    	if(a==b&&b==c)
  		{
    	    printf("���ﰢ��");
  		}
    	else if((c*c)==(a*a)+(b*b))
    	{
    	    printf("�����ﰢ��");
    	}
    	else if((a==b)&&(b!=c)||(a==c)&&(c!=b)||(b==c)&&(c!=a))
    	{
    	    printf("�̵�ﰢ��");
    	}
    	else
    	{
    	    printf("�ﰢ��");
    	}
    } 
    else
    {
    	printf("�ﰢ���ƴ�");
	} 
}

