#include<stdio.h>
int main()
{
	int n,c=1,fact=1;	
	scanf("%d",&n);
	while(c<=n)
	{
		fact=fact*c;
	     c++;
	
	}
	printf("factorial of a no.%d",fact);
	
}
