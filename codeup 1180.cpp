#include <stdio.h>

int main()
{
    int n=0;
    int set=0;
    int value=0;
    int total=0;
    int sum=0;
    scanf("%d",&n);

	set = n%100+n/100;
	value = n%10;
	sum = ((set/10)*2+(value*20))%100;
    if(sum<=50)
    {
    	printf("%d\n",sum);
    	printf("GOOD\n");
	}
	else if(sum>50)
	{
		printf("%d\n",sum);
		printf("OH MY GOD\n");
	}
}

