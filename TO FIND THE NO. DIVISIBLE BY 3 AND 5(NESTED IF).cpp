#include<stdio.h>
int main ()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	if(a%3==0)
	{
		if(a%5==0)
		{
			printf("divisible by both 2 &5");
		}
	}
	     else
		{
			printf("not");
		}
		
	}

