#include<stdio.h>
int main()
{
	int fact=1,i=1,n;
	scanf("%d",&n);
	do
	{
		fact=fact*i;
		i++;
	}while(i<=n);
	printf("factorial of a no.%d",fact);
}
