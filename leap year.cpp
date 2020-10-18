#include<stdio.h>
int main()
{
	int y,l;
	#you should consider more variables
	printf("ENTER A YEAR ;");
	scanf("%d",&y);
	if(y%100==0)
	{
		if(y%400==0)
		{
			l=1;
		}
	}
	else if(y%4==0)
	{
		l=1;
	}
	else
	{
		l=0;
	}
	if(l==1)
	{
		printf("leap");
	}
	else
	{
		printf("not leap");
	}
}
