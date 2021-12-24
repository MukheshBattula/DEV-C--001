#include<stdio.h>
int main()
{
	int n,c=1;
printf("enter a number");	
scanf("%d",&n);
	while(c<=n)
	{
	if(n%c==0)
	printf("%d",c);
		c=c+1;			
	}
	}
