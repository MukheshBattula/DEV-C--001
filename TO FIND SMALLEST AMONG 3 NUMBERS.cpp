#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b&&a<c)
	{
		printf("smallest no %d",a);
		
	}
	else if (c<b&&c<a)
	{
		printf("smallest no %d",c);
	}
	else
	{
		printf("smallest no %d",b);
	}
}
